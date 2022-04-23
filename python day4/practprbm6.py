sub1=int(input("Enter marks in sub1 : "))
sub2=int(input("Enter marks in sub2 : "))
sub3=int(input("Enter marks in sub3 : "))
sub4=int(input("Enter marks in sub4 : "))
total=sub1+sub2+sub3+sub4
ave=total/4
if(ave>=90 and ave<=100):
    print("extradinary")
elif(ave<=90 and ave>=80):
    print("A")
elif(ave<=80 and ave>=70):
    print("B")
elif(ave<=70 and ave>=60):
    print("C")
elif(ave<=60 and ave>=50):
    print("D")
elif(ave<=50):
    print("f")