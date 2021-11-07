class MyError(Exception):
	def __init__(self,value):
		self.value = value
	def __str__(self):
		return str(self.value)

boolean = True 
while boolean:
	try:
		x = int(input("enter a number: "))
		if(x > 5):
			raise Myerror(x)
		except ValueError:
			print("Ooops!! Not a valid number")
		except (TypeError, IOError) as e:
			print(e)
		except MyError as e:
			print("My custom exception",e)
		else : 
			print("All ok")
			boolean = false
		finally:
			print ("I'm on finally block")
