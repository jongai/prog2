'''
  File name: hello.py
  Author: Jonathan Gai
  Date created: 1/15/2020
  Date last modified: 1/15/2020
  Python Version: 3.7
'''
age = input("Hello\nWhat is your name: ")
try:
    age = input("What is your age: ")
    age = int(age)
    if age >= 16:
        color = input("What is the color of your car: ")
        print("I like" + color + ". " + "Your car is " + color + ".")
    else:
        color = input("What do you call your bicycle: ")
        print("I like" + color + ". " + "Your bicycle is " + color + ".")
except ValueError:
    print(age + " is not a number.")
    print("Imagine not being able to type a number. SMH my head")
