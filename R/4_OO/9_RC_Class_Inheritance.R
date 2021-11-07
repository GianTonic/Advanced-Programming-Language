#NOT COPIED ON MODIFY
Account <- setRefClass("Account",
                       fields = list(balance = "numeric"),
                       methods = list(withdraw = function(x){
                        if (balance < x) {stop("Not good")}
                        else{balance <<- balance - x}
                         }
                        )
                       )
a <- Account$new(balance = 100)
a$balance
a$withdraw(50)
a$balance
b<-a
#INHERITANCE              		 contains
subAccount <- setRefClass("subAccount",contains ="Account",fields = list(size="numeric"),
		methods=list(withdraw = function(c){ print("on method")}))
		
sa <-subAccount$new(balance = 100,size = 10)
sa$balance
sa$size
