//channel is a reference type, bidirectional.
package main

import "fmt"

func hello( ch chan int ){
  ch<-1
}
func main(){
  ch:=make(chan int)
  go hello(ch)
  fmt.Println(<-ch) //this istruction can be executed only when there is something that send (hello()) ->Possible deadlock
}
