from operator import indexOf


try:
    a=int(input("enter a number: "))
    b=int(input("enter a number: "))
    print(a/b)
except ZeroDivisionError:
    print("division by zero error: ")