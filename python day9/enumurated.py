list=[1,2,3,'mahesh']
i=0
for item in list:
    i=i+1
    print(f"item number {i} is {item}")


# OR 

for i,item in enumerate(list):
    print(f"item number {i+1} is {item}")