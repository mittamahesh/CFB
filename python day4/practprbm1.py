a=int(input("enter first number : "))
b=int(input("enter second number : "))
c=int(input("enter third number : "))
d=int(input("enter fourth number : "))
if(a>b and a>c and a>d):
    print("a is largest ")
elif(b>c and b>a and b>d):
    print("b is largest")
elif(c>a and c>b and c>d):
    print("c is largest")
else:
    print("d is largest")
