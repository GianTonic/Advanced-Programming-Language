#Read from file
f = open('read.txt','r')
f.read() #return entire contents's file as a string
f.readline()
f.readline()
for line in f:
	print(line)
f.close()

#no need to close
with open("read.txt","r") as txt:
	for line in txt:
		print(line)

#Write on file
f = open("write.txt","w")
f.write("I'm writing on file write.txt")
f.close()
