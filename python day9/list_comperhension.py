list1=[1,3,4,5,6]

list2=[]
'''for item in list1:
    list2.append(item*item)
    print(list2)'''
list2=[i*i for i in list1]
print(list2)