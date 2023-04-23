#!/usr/bin/env python

import random
bingo = []
numbers = []

def ran():
  p = random.randint(1,90)
  return p

def prettyPrint():
    for row in bingo:
        print("{:<6} {:<6} {:<6}".format(row[0], row[1], row[2]))

for i in range(0,8):
  numbers.append(ran())
  
numbers.sort()

bingo =[[numbers[0],numbers[1],numbers[2]],[numbers[3],"BINGO", numbers[4]],[numbers[5],numbers[6],numbers[7]]]

prettyPrint()

i = 0

while (i<8):
  answer  = int(input("Next number: "))
  for row in bingo:
    for j in range(len(row)):
      if row[j] == answer:
        row[j] = "X"
        prettyPrint()
        i+=1
    
print("You've won")



    
  
