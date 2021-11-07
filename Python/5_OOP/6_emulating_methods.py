#classe con write method, che è un valido argomento per l'istruzione print(obj)
class Random:
	def write(self,stri): 
		print("stri: "+str(stri))

if __name__=="__main__":
	obj = Random()
	print (obj, "whatever")
		
	
