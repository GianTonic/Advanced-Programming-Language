package main
import "fmt"
func double(a func(a,b int)int){
  fmt.Println(a(1,2))
}
func main(){
  f:=func(a,b int) int{
    return a+b
  }
  double(f)
}
