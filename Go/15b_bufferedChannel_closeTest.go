//channel is a reference type, bidirectional.
package main

import "fmt"

func hello( ch chan int ){
  ch <-1  //sends to a buffered channel block when the buffer is full
  ch <-2
  close(ch) //only the sender should close the channel
}
func main(){
  ch:=make(chan int,2)
  go hello(ch)
  fmt.Println(<-ch) //Receives block when the buffer is empty
  fmt.Println(<-ch)
  v,ok := <- ch  //Testing if the sender has closed the channel. v is the remaining value if the channel is not closed
  if !ok{
  	fmt.Println("Channel closed")
  }else{
  	fmt.Println(v)
  }
}
