try:
    print("hello world")
    a=int(input("enter a number : "))
    b=int(input("enter another number : "))
    print(a+b)

except Exception as e:
    print(e)