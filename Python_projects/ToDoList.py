#!/usr/bin/env python
import os
import time

todoList = []

def prettyPrint():
  for row in todoList:
    print(row)


def menu():
  print("1 Add\n", "2. View\n", "3. Edit\n", "4. Remove\n")
  return;

def add():
  print("ADD")
  print()
  what = input("What is it? ")
  when = input("When is it due to? ")
  how  = input("How important is it? ")
  todoList.append([what, when, how])
  return


def view():
    print("Do you want to see all or only   priority?") 
    print("1. View priority", "\n", "2. View all")
    search = int(input(" "))
    if search == 1:
      for row in todoList:
        for word in row:
          if word.lower() == "high":
            print(row)        
    else:
      prettyPrint()
    return
   
def remove():
  remove = input("Remove: ")
  todoList[:] = [row for row in todoList if remove.lower() not in [word.lower() for word in row]]
  return

def edit():
  oldEdit = input("What do you want to edit: ")
  newEdit = input("How you want it to be: ")
  for row in todoList:
        for i in range(len(row)):
          if row[i].lower() == oldEdit.lower():
            row[i] = newEdit

  return


print ("Welcome to the life organizer.")
while True: 
  menu()
  reponse = input("Do you want to add, view, edit or remove a to do?")
  time.sleep(2)
  os.system("clear")
  if reponse.lower() == "add":
    add()
    time.sleep(2)
    os.system("clear")
  elif reponse.lower() == "view":
    view()
    time.sleep(2)
    os.system("clear")
  elif reponse.lower() == "edit": 
    edit()
    time.sleep(2)
    os.system("clear")
  elif reponse.lower() == "remove":
    remove()
    time.sleep(2)
    os.system("clear")

