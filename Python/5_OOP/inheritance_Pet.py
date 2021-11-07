class Pet:
	def __init__(self,name,age):
		self.name=name
		self.age=age
	def get_name(self):
		return self.name
	def get_age(self):
		return self.age
	def __str__(self):
		return "This pet's name is "+ str(self.name)
		
