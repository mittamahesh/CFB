class A:
    a=10
class B:
    b=15
class C(A,B):
    c=12


obj=C()
print(obj.c)
print(obj.b)
print(obj.c)
