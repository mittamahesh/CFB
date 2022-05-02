import os
firstname=input("enter the name of the file")
newname=input("enter name fo the file")
with open(firstname,'r') as f:
     text=f.read()
with open(newname,'w') as f:
    f.write(text)
os.remove(firstname)