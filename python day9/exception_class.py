try:
    print("hello world")
    a=int(input("enter a number : "))
    b=int(input("enter another number : "))
    print(a+b)


except ZeroDivisionError:
    print("division by zero error")
except ValueError:
    print("value type error")

except Exception as e:
    print(e)
