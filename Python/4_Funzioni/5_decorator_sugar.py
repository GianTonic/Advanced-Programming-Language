def tags(tag_name):
	def tags_decorator(func):
		def func_wrapper(name):
			return "<"+tag_name+">"+func(name)+"</"+tag_name+">"
		return func_wrapper
	return tags_decorator


#this time i can use say_hello() instead of assigning a new name as 4_decorator.py example and i can pass arguments
@tags("p")
def say_hello(name):
	return "Hello, " + str(name) +"!"
	
	
#i can use say_hello() directly	
print( say_hello("John") )
