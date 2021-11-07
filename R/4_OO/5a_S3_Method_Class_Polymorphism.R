f <- function(x)UseMethod("f")

a <-structure(list(),class ="a")
f.a <- function(x)"Method f of Class a"
mean.a <- function(x)"Method mean of Class a"
#class(a)

b <- structure(list(),class="b")
f.b <- function(x)"Method f of Class b"
mean.b <- function(x)"Method mean of Class b"

f(a)
mean(a)
f(b)
mean(b)

#Polymorphism
l=list(a,b)
for(i in l){
	print(f(i))
}
