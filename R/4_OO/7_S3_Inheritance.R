#Constructor of class [a]
a = function(x,y){
	out=list(x=x,y=y)
 	class(out)="a"
 	out
}
#Method of class [a]
sum <- function(x)UseMethod("sum")
sum.a <- function(x){
	z = x$x + x$y
	z
}

#Constructor of class [b] calling constructor's superclass [a] and adding parameter z
b = function(x,y,z){
	out=a(x,y)
	out$z=z
 	class(out)=c("b","a")
 	out
}

#calling constructor's [a]
x=a(1,2)
x
x$x
x$y
#calling method's [a]
sum(x)

#calling constructor's [b]
y=b(3,4,5)
y
y$x
y$y
y$z
#calling method's [b] inheritanced
sum(y)

