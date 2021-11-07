employees <- data.frame(row.names = c("E1","E2","E3","E4","E5"),name = c("Rick","Dan","Alex","Ryan","John"),salary=c(111,222,333,444,555),age=c(18,22,33,44,55),stringsAsFactors = FALSE)
employees

#Access
employees["name"]
employees$name
employees[["name"]]
employees[[1]]

#Access data frame like Matrix
employees[1:3,] # 1 2 3 row
employees[employees$age>34,] #row of Ryan and John
employees[1:2,2] #1 and 2 row of column salary

#Functions of Data Frame
names(employees)
ncol(employees) #3
nrow(employees) #5
length(employees) #3

#Modify Data Frame
employees[1,"age"]<-20
employees

#Adding Components
#Row
employees=rbind(employees,E6=list("Paul",666,66))
employees
#Column
employees=cbind(employees,state=c("RG","CT","PA","NY","PV","MI"))
employees

#Deleting
employees$state<-NULL #delete state column
#or
employees <- employees[-6,] #delete 6 row
employees
