add=function(x,g)UseMethod("add")
point=function(x,y){
  c=list(x=x,y=y)
  class(c)="point"
  c
}
add.point=function(otherPoint,g){
  z = otherPoint$x + otherPoint$y
  print(g)
  z
}
p=point(1,2)
add(p,3)

