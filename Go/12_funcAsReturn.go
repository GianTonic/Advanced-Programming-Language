package main
import "fmt"
func torna()func(a,b int)int{
  f:=func(a,b int)int{
    return a+b
  }
  return f
}
func main(){
  s:=torna()
  fmt.Println(s(1,2))
}
