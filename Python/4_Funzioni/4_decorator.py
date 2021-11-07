def say_hello(name):
	return "Hello, " + str(name) +"!"


def p_decorator(func):
	def func_wrapper(name):
		return "<p>"+func(name)+"</p>"
	return func_wrapper

my_say_hello = p_decorator(say_hello)	
print(my_say_hello("John"))
