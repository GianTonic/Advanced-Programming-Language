package main

import (
  "fmt"
  "sync"
  "time"
)

type Structure struct{
  v map[string] int
  mux sync.Mutex
}
//We can define a block of code to be executed in mutual exclusion by surrounding it with a call to Lock and Unlock as show here
func (s *Structure)Inc(key string){
  s.mux.Lock()
  s.v[key]++
  s.mux.Unlock()
}
func (s* Structure)Rec(key string)int{
  s.mux.Lock()
  defer s.mux.Unlock()
  return s.v[key]
}
func main(){
  c:=Structure{v:make(map[string]int)}
  for i:=0;i<1000;i++{
    go c.Inc("String")
  }
  time.Sleep(time.Second)
  fmt.Println(c.Rec("String"))
}
