# A dice roller created Kurian Benoy
import random

print("Welcome to the dice roller")
ch='Y'
while(ch=='Y'):
    print("Die is rolling.... roling ...")
    print(random.randint(1,6))
    print("Do you want to roll again(Y/N)")
    ch=input()
    
    
