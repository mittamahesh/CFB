import random

num=random.randint(1,100)
guess=int(input("Guess the number"))
count=0
while(True):    
    if(guess>num):
        guess=int(input("Guess the another number. this is too high : "))
        count+=1
    elif(guess<num):
        guess=int(input("Guess another number.this is too low"))
        count+=1
    else:
        print("yeah amazing you are great! you guessed right number")
        break
print(count)

