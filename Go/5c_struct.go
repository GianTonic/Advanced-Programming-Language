package main

import "fmt"

type A struct {
  a int
  b float64
}
type B struct {
  A
  c int
}

func main() {
  //b := B{A{1, 2}, 3}
  var b B
  b.c = 10
  b.a = 5
  b.b = 10.1
  fmt.Println(b)
}
