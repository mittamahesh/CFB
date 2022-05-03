class Employee:
    a=12
    b=10
    c=20
    @classmethod
    def setAttribute(cls,a,b,c):
        cls.a=a
        cls.b=b
        cls.c=c


    @property
    def length(self):
        return self.a

    @length.setter 
    def length(self,value):
        self.a=value


emp =Employee()
emp.setAttribute(1,2,3)
print(emp.length)

emp.length=12
print(emp.length)