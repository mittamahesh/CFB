from operator import indexOf
from time import process_time


num=int(input("Enter number : "))
fac=1
for i in range(1,num+1):
    fac=fac*i
print(fac)
