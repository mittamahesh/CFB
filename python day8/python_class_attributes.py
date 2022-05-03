
class Employee:
    name="mahesh"
    marks=99
    center="kurnool"
    def printobj(self):
        print(f"the name is {self.name}")
        print(f"The marks of {self.name} is : {self.marks}")
        print(f"the center of {self.name} is : {self.center}")

    def great(self):
        print(f"hello {self.name}")


mahesh=Employee() 
vyshu=Employee()  
print(mahesh.name)
print(mahesh.marks)
print(mahesh.center)
print(vyshu.name)
print(vyshu.marks)
print(vyshu.center)
vyshu.name="vyshu"  #instance attributes of object
print(vyshu.name)
print(mahesh.name)
mahesh.printobj()
mahesh.great()