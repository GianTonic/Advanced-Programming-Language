package main
import "fmt"

type S struct{
	a,b int
}
func (s S) doubleValueReceiver(){ //Value receiver
    s.a= s.a * 2
    s.b = s.b * 2 
}

func (s *S) doublePointerReceiver(){ //Pointer receiver
    s.a= s.a * 2
    s.b = s.b * 2 
}


func main(){
	sp:= &S{a:1,b:2}
	sp.doubleValueReceiver()
	fmt.Printf("%d",sp.a) //a is 1, because the methods works on object's copy
	fmt.Println()
	
	sp.doublePointerReceiver()
	fmt.Printf("%d",sp.a) //a is changed 
	fmt.Println()
}
