
from unicodedata import name


class Employee:

    def __init__(self,name,marks):
        self.name=name
        self.marls=marks
    
    def printobj(self):
        print(f"the name if {self.name}")
        print(f"the marks is {self.name}")
    @staticmethod
    def great():
        print("hello every one")


mahesh=Employee("mahesh",20) 
mahesh.great()