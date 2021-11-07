package main
import "fmt"

func main(){
	f:=func(){
		fmt.Println("I'm executing on anonymous function")
	}
	f()
	fmt.Printf("%T",f) //func()
}
