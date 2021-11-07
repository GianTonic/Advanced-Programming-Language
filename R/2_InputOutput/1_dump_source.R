x <- "foo"
y <- data.frame(a=1,b=1)
dump(c("x","y"),file = "dump_source.R")
rm(x,y)
source("dump_source.R") #invers of dump()
x
y
