import bar
print("Hi from foo's top level!")

	
if __name__ == "__main__":
	print("foo's __name__ is __main__")
	bar.print_hello()
