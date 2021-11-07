#Dictionary is collection of elements in which each element is a key-value pair. The KEYS must be UNIQUE(hashable) - IMMUTABLE  object

d1 = {}
d2 = dict()
d3 = {"Name": "Susan","Age":19,"Major":"CS"}
print(d3)

#keys must be unique
d3 = {"Name": "Susan","Name":"Jeorge","Age":19,"Major":"CS"}
print (d3) #{'Name': 'Susan', 'Age': 19, 'Major': 'CS'}

#key must be immutable
a="immutableKey"
d4 = {a:1,"b":2}
print(d4)
print(d4["immutableKey"])
#a = 5
#print(d4[5]) #ERROR --> Key are immutable

#Operations on dictionary
#add
d3["height"]=1.73
#modify
d3['Name'] = "Jeorge"
print(d3)
#delete
del d3["Major"]
print(d3)
#access one element
print(d3["Name"])
#list of key:value
print(d3.items())
#print all elements
for key,value in d3.items():
	print(key,":",value)
