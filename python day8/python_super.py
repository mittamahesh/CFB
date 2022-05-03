class A:
    a=10
    def __init__(self)->None:
        print(A)
class B(A):
    b=15
    def __init__(self)->None:
        super().__init__()
        print(B)
class C(B):
    c=12
    def __init__(self)->None:
        super().__init__()
        print(C)


obj=C()
print(obj.c)
print(obj.b)
print(obj.c)
