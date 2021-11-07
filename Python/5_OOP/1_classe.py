class myclass:
	i='iniziale'
	def __init__(self,var):
		print(self.i)
		self.i = var
	def func(self,var):
		self.i=var

c = myclass('sono cambiata')
print(c.i)


