from inheritance_Pet import Pet
class Dog(Pet):
	def __init__(self,name,age,extraAttribute):
		Pet.__init__(self,name,age)
		self.extra=extraAttribute
	def get_extra(self):
		return self.extra

if __name__== "__main__":
	dog = Dog("Fido",4,"hei")
	print(dog)
	print(dog.get_extra())
