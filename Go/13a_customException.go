package main

import (
    "fmt"
    "os"
)

type MyError struct{}

func (m *MyError) Error() string {
    return "boom"
}

//error is the built-in interface
func sayHello() (string, error) {
    return "hello", &MyError{}
}

func main() {
    s, err := sayHello()
    if err != nil {
        fmt.Println("unexpected error: err:", err)
        os.Exit(1)
    }
    fmt.Println("The string:", s)
}
