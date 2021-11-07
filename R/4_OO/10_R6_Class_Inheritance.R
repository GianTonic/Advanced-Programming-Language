library(R6)
Person <- R6Class("Person", public = list(name=NULL,initialize = function(name = NA){
								   self$name <- name
								   
								   },set_name= function(val){
								   	self$name <-val
								   },
								   get_name= function(){
								   	self$name
								   }
				      
				      
				      )
		)

p <-Person$new("padre")
p	
	
Man <-R6Class("Man",inherit = Person, public = list(sex=NULL,age=NULL, 
								 initialize = function(name=NA,sex=NA,age = NA){
								   super$initialize(name)
								   self$sex <- sex
								   self$age <- age
								   
								   },set_age= function(val){
								   	self$age <-val
								   },
								   get_age= function(){
								   	self$age
								   }
				      
				      
				      )
		)
	
Giovi <- Man$new(name="Gio","M",15)
Giovi$sex
Giovi$age
Giovi$get_name()
