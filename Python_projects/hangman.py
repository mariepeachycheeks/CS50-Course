#!/usr/bin/env python

import random
listOfWords = ["pear", "mom", "book", "look", "sun" ]
word = random.choice(listOfWords)
print("Hangman")
print()
print (word)
letterUsed = []
wrongGuesses = 0
while (wrongGuesses != 5):
      print()
      letter = input("Chose letter:\n")
      letterUsed.append(letter)
      if letter.lower() in word.lower():
        print("Correct!")
        word.split()       
      else:
         print(letter,"is not in the word.")
         wrongGuesses += 1
      for i in word:
          if i in letterUsed:
            print(i, end=' ')  
          else:
            print("_", end=' ') 
         
 