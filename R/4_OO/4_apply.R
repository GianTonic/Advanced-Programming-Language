matrice=matrix(data = seq(1,10),nrow = 2)
matrice
f=function(x){
  for(y in x)
    y=y+1
    y
}
apply(matrice,2,f)
