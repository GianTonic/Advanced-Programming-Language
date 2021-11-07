package main

import "fmt"

type A struct{
  a int
  b float64
}
type B struct{
  A
  c int
}
func main(){
  var a *A=new(A) //there isn't initialization
  a.a=10
  a.b=9
  //pp := &A{8,9}
  var b *B=new(B)
  b.c=10
  fmt.Println(b.c)
}
