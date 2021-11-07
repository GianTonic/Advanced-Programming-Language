package main

import "fmt"

func pump(ch chan int){
  for i:=0;i<10;i++ {
    ch <- i
  }
  close(ch)
}
func main(){
  ch:=make(chan int,2)
  go pump(ch)
  for x:= range ch{ //for is stopped when the channel is closed (x,ok <- ch  when ok is not true)
    fmt.Println(x)
  }
  fmt.Println("Channel closed")

}
