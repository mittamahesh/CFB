num = int(input("Enter the number :"))

for i in range(2, num):
    if (num%i == 0):
        print(num," is a Not Prime")
        break 
else:
    print(num," is prime")