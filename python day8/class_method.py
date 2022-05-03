class Employee:
    a=12
    b=10
    c=20
    @classmethod
    def setAttribute(cls,a,b,c):
        cls.a=a
        cls.b=b
        cls.c=c

emp =Employee()
print(Employee.a)
print(Employee.b)
print(Employee.c)
emp.setAttribute(1,2,3)
print(Employee.a)
print(Employee.b)
print(Employee.c)