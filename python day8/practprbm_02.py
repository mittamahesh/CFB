import math

class Calculator:

    def __init__(self,num):
        self.num=num

    def square(self):
        return(self.num*self.num)
    def cube(self):
        return(self.num*self.num*self.num)
    def sqroot(self):
        return(math.sqrt(self.num))


num=int(input("Enter a number : "))
cal=Calculator(num)
print("square of a ",num ," is ",cal.square())
print("cube of a ",num,"is ",cal.sqroot())
print("square root of a ",num ," is ",cal.cube())


