myClass <- setClass(
	"myClass",
	slots=c(
		x = "numeric",
		y = "numeric"
		),
	#default values for the slots (optional)
	prototype = list(
		x= 0.0,
		y= 0.0
		),
	validity = function(object){
		if((object@x<0) || (object@y<0)){
			return("Negative number is not possible")
		}
		return(TRUE)
	}
)

#Adding a method
setGeneric(name="reset",
	   def=function(object,xVal,yVal){standardGeneric("reset")}
)
setMethod(f="reset",
	  signature="myClass",
	  definition = function(object,xVal,yVal){
	  	object@x <- xVal
	  	object@y <- yVal
	  	return(object)
	  }
)

mc <- myClass(x=5,y=7)
mc
mc <- reset(mc,0,0)
mc

mySonClass <- setClass(
	"mySonClass",
	slots=c(
		u = "character"
		),
	#default values for the slots (optional)
	prototype = list(
		u=""
		),
	validity = function(object){
		if((object@u=="")){
			return("Empty")
		}
		return(TRUE)
	},
	#set the inheritance
	contains = "myClass"
)

msc <- mySonClass(x=10,y=20,u="input")
msc
