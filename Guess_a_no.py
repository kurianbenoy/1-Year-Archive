# A program to guess a no

import random
def guess(a,b):
    if a==b:
        print("Hm.....\n Your guess is correct")
    elif a<b:
        print("Guess a bit less")
    elif a>b:
        print("Come on,Guess a bit high")
    

ch='Y'
while(ch=='Y'):
    a=random.randint(1,100)
    print("Enter a no")
    b=int(input())
    guess(a,b)
    if(a==b):
        break
    else:
        print("Do you want to continue (Y/N)")
        ch=input()
    
