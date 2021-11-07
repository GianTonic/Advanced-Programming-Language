#List is a non-homogeneous (compound) - mutable - not unique collection of elements.

l1 = [] #empty list
l2 = ["string",1,2.0]
l3 = [x*x for x in range(0,5)]
l4 = list() #empty list with constructor
l4 = list(x*x for x in range(1,3)) #list is mutable
print(l1,l2,l3,l4)

#Accessing to list
l2[2] = 3
print(l2[2])

#insert/removing elements
l2.append(47) #insert on last element
l2.insert(2,47) #insert on index 2
print(l2)
l2.remove(47)
print(l2)

#list as stack (LIFO)--> append() and pop() 
stack=[34,56,29,73,19,62]
print("stack: ",stack)
stack.append(47)
print("append 47 at the end ",stack)
stack.pop()
print(stack)

#list as queues (FIFO) --> natively insert() and pop() or import deque object from collections module.
queue = [1,2,3,4,5]
print("queue: ",queue)
queue.insert(0,10)
print("queue: ",queue)
queue.pop()
print(queue)

#queue from collections moudule
from collections import deque
d=deque([35,19,67])
print("deque: ",d)
d.append(42)
print(d)
d.popleft()
print(d)
