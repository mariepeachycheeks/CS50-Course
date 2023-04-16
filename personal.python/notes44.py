list =[]

def prettyPrinting():
  print()
  for row in list:
    for item in row:
      print(f"{item:^10}", end = " | " )
    print()
  print()

while True:
  answer = input("Add or remove? : ")
  if answer.strip().lower()[0] == "a":
    name = input("name: ")
    age = input("age: ")
    superpower = input("superpower: ")
    row = [name, age, superpower]
    list.append(row)
    prettyPrinting()
    continue
  else:
    name = input("What is the name of the record you want to delete? ")
    for row in list:
      if name in row:
        list.remove(row)
    prettyPrinting()
    continue


