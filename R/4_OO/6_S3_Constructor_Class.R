#Constructor
a = function(x,y){
	out=list(x=x,y=y)
 	class(out)="a"
 	out
}

#Method of class a
sum <- function(x)UseMethod("sum")
sum.a <- function(x){
	z = x$x + x$y
	z
}

#calling constructor
x=a(1,2)
x
x$x
x$y

#calling method
sum(x)

