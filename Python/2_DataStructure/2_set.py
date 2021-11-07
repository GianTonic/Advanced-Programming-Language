#Set is a non-homogeneous - mutable - UNIQUE (hashable) collection of elements
#Frozenset is an immutable version of Set

s1 = set() #empty constructor 
s1 = set([]) #empty constructor
s1 = set([1,2,3])
print(s1)
l1 = ["string",1,2.0]
s1 = set(l1)
print(s1)
#We can create initialized set with the {#expression}. If {} are empty we have an empty dictionary
s1 = {x*x for x in range(0,5)}
print(s1)

#operations
s1.add('y')
print("adding 'y' ",s1)
s1.remove('y')
print("removing 'y' ",s1)
s1.pop() #remove an arbitrary element
print("pop on s1 ",s1)


