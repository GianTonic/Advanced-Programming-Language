l <-list (a = 1:5,b = 6:10)

f <- function(x){
	x*x
}

lapply(l,f)
lapply(l,mean)
