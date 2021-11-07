#First, the try block is executed. If there are no errors, except is skipped and the execution proceeds as normal.
#If there are errors, the rest of the try block is skipped: Proceeds to except block with the matching exception type.
#Unhandled exceptions halt execution

class MyError(Exception):
	def __init__(self,value):
		self.value = value
	def __str__(self):
		return str(self.value)

boolean = True
while boolean:
	try:
		x=int(input("enter a number: "))
		if (x>5):
			raise MyError(x)
	except ValueError:
		print("Ooops!! Not a valid number")
	except (TypeError, IOError) as e:
		print(e)
	except MyError as e:
		print("My Exception occurred because you have digit: ", e)
	else: #Run if no exception is raised
		print("all ok")
		boolean = False
	finally: #Always perform this block. Unhandled exceptions(not caught, or raised in except) are re-raised after finally executes
		print("I'm on finally block")
	
