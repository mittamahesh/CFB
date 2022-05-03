
class Employee:
    name="mahesh"
    marks=99
    center="kurnool"
    def printobj(self):
        print(f"the name is {self.name}")
        print(f"The marks of {self.name} is : {self.marks}")
        print(f"the center of {self.name} is : {self.center}")


mahesh=Employee()   
print(mahesh.name)
print(mahesh.marks)
print(mahesh.center)
mahesh.printobj()