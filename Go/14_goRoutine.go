package main

import (
  "fmt"
  "time"
)

func IsReady(what string, minutes int64) {
time.Sleep(time.Duration(minutes)) // Unit is nanosecs.
fmt.Println(what, "is ready")
}
func main() {
  go IsReady("tea", 6000)
  go IsReady("coffee", 6000)
  time.Sleep(time.Duration(6000))
  fmt.Println("I'm waiting...")
}
