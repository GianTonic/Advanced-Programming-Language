def connect(uname, *args, **kwargs):
# arg = tupla 		kwargs = dictionary
	print("uname param: ",uname)
	for arg in args:
		print(arg)
	for key in kwargs.keys():
		print(key,":", kwargs[key])

connect('admin','ilovecats','ilovedogs',server='localhost',port=9160)  
