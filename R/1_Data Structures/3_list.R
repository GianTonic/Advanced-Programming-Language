l=list(Name="Giovanni",Surname="Santoro",Age=26, lis=list(10,12,14))

#show a element
l$Nome #solo oggetto
l[1] #sia Nome che oggetto
l[[1]] #solo oggetto
l["Name"] #sia Nome che oggetto
l[["Name"]] #solo oggetto
l[[c(4,1)]] #output = 10
l[[4]][[1]] #output = 10

#show all elements
for(i in l){
	print(i)
}


#add element in a list
l[["c"]]=seq(8,12)
l$height="1 m"

