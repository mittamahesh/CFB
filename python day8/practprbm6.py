class Vector2d:
    def __init__(self,i,j)->None:
        self.i=i
        self.j=j


class vector3d(Vector2d):
    def __init__(self,i,j,k):
        super().__init__(i,j)
        self.k=k


v2=Vector2d(1,5)
v3=Vector3d(1,2,3) 


