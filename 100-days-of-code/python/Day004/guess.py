import random

num = random.randint(0, 1000)

print ("Guess the number between 0 to 1000.")

unum = int(input("Enter number :"))

while num != unum :
    print ("Try again!")
    unum = int(input("Enter number again :"))

print ("You got it.. The number is", num, ".")
