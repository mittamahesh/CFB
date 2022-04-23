sub1=int(input("marks in sub1 : "))
sub2=int(input("marks in sub2 : "))
sub3=int(input("marks in sub3 : "))
total=sub1+sub2+sub3
average=total/3
if(average>=40 and sub1>=33 and sub2>=33 and sub3>=33):
    print("student is pass:")
else:
    print("student is fail you have to train yourself better")
