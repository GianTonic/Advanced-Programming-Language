class Point:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def __add__(self, other):
        if isinstance(other,Point):
            return Point(other.x+self.x, self.y+other.y)
        else:
            return NotImplemented
    def __str:__(self):
        return "X: "+ str(self.x) + " Y: "+str(self.y)

if __name__==__"main"__:
    p1=Point(1,2)
    p2=Point(2,1)
    print(p1+p2)
