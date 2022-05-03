class A:
    a=10
class B(A):
    b=15
class C(B):
    c=12


obj=C()
print(obj.c)
print(obj.b)
print(obj.c)
