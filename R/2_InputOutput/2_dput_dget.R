y <- data.frame(a=1,b=1)
dput(y,file="dput_dget.R")
rm(y)
y <- dget("dput_dget.R") #invers of dput()
y
