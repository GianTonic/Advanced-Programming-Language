package main

func suck(ch <- chan int){
	for{
		<-ch
	}
}
func pump(ch chan <- int){
	for{
		ch <- 1
	}
}

func main(){
	c:=make(chan int)
	go pump(c)
	go suck(c)
}
