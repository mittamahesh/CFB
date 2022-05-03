class Train:
    def __init__(self)->None:
        self.seat=78
        self.fare=175
    def getstatus(self):
        print(self.seat)
    def getfare(self):
        print(self.fare)
    def bookticket(self):
        self.seat -=1



obj=Train()
obj.bookticket()
obj.getstatus()
obj.getfare()
obj.getstatus()
