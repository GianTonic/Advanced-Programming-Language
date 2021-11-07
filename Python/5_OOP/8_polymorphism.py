class P1:
	def M1(self):
		return 5

class P2():
	def M1(self):
		return 10
x1=P1()
x2=P2()

for x in (x1,x2):
	print(x.M1())
