package main 
import "fmt"
func fibonacci(c,quit chan int){
	x,y:=0,1
	for{
		select{ //select statement wait until the communication (send or receive operation) is prepare for some cases to begin. 
			case c<-x: //sending on c channel
				x,y = y,x+y
			case <- quit:
				fmt.Println("quit")
				return
			//default:  //default statement is used to protect select statement from blocking
				//fmt.Println("I'm on default statement")
		}
	}
}

func main(){
	c:= make(chan int)
	quit:= make(chan int)
	go func(){
		for i:=0; i<10; i++{
			fmt.Println(<-c)
		}
		quit <-0
	}()
	fibonacci(c,quit) 
	
}
