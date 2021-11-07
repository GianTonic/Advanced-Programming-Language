class Dog:
	kind = 'canine' #class variable
	def __init__(self,name):
		self.name = name #instance variable
	def modificaKind(self,value):
		self.kind = str(value) 
	def __str__(self):
		return "This Pet's name is "+ str(self.name)
d = Dog('Fido')
e = Dog('Stefi')
print(d.kind, e.kind, d.name, e.name)
d.modificaKind('cia')
e.modificaKind('ciao')
print(d.kind, e.kind)
print (d)
