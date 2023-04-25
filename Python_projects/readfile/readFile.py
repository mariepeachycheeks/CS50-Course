#!/usr/bin/env python

f = open("/Users/mariyavashchenko/Desktop/CS50-Course/Python_projects/readfile/high.score", "r")
contents = {}
for line in f:
  line = line.strip()
  if not line:
    continue
  parts = line.split()
  key = parts[0]
  value = int(parts[1])
  contents[key] = value
  
coconut = 0
for key in contents:
  
  if contents[key] > coconut:
    coconut = contents[key]
for key in contents:
  if contents[key] == coconut:
    print (f"Current leader is {key} {contents[key]}")

                                                  
f.close()
