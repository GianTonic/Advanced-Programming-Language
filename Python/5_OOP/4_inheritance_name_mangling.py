class Mapping:
	def __init__(self,iterable):
		self.item_list=[]
		self.__update(iterable)
	def update(self,iterable):
		for item in iterable:
			self.item_list.append(item)
	__update = update
	
class MappingSubclass(Mapping):
	def update(self,keys,value):
		for item in zip(keys, value):
			self.item_list.append(item)
			
if __name__=="__main__":
	x = MappingSubclass([1,2,3])
	print(x.item_list)
	x.update(['key1','key2'],['val1','val2'])
	print(x.item_list)
