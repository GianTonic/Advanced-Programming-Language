m<- matrix(data = c(1:6),nrow=3,ncol=2)
m
attributes(m)
#subsetting
m[2,]
#add column 
(m<-cbind(m,1:3))
#add row
(m<-rbind(m,1:3))
