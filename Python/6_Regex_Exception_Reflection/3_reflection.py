#Modify object dinamically without Reflection

class A:
	pass

A.x = 1
a = A()
a.y = 2

#print (a.y)
#print (a.x)

#Modify object dinamically with Reflection

def init(self):
	self.x = 1
	
def test(self,param):
	pass
	
test.__code__=(lambda self,param : print(param)).__code__

class B:
	pass
	
setattr(B, '__init__', init)
setattr(B,'test',test)
b = B()
print(b.x)
b.test("Hello")

#Creating Classes at runtime
C = type('A',(),{'x':1})

c= C()
print(c.x)
