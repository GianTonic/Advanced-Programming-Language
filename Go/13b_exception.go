package main

import (
  "fmt"
  "syscall"
)

type MyExcept struct{x string }
func(m *MyExcept) Error()string{
  if(m.x=="Giovanni"){ return m.ErrorGiovanni()}
  if(m.x=="Nicola"){ return m.ErrorNicola()}
  return "Errore nome generico"
}
func(m *MyExcept) ErrorGiovanni()string{
  return "Errore Giovanni"
}
func(m *MyExcept) ErrorNicola()string{
  return "Errore Nicola"
}
func sayHello(s string)(bool,error){
  if s=="Stefano"{
    return true,nil
  }
  if s=="Nicola"{
    return false,&MyExcept{x: "Nicola"}
  }
  if s=="Giovanni"{
    return false,&MyExcept{x: "Giovanni"}
  }
  return false,&MyExcept{}
}
func main(){
  ok,err:=sayHello("Nicola")
  if err!=nil{
    if me,ok:=err.(*MyExcept);ok{
      fmt.Println("Errore ", me)
      syscall.Exit(1)
    }else{
      fmt.Println("Errore ", err)
      syscall.Exit(1)

    }
  }else{
    fmt.Println("Puoi passare Stefano",ok)
  }
}
