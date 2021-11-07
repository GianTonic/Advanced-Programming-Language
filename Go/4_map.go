package main
import "fmt"
func main(){
	a := map[string]int{"Buffon":1,"Donnarumma":2}
	b := make(map[string]int)
	a["Delpiero"]=3
	b["Cannavaro"]=4
	var num,ok = a["Delpiero"]
	if ok==true{
		fmt.Println("found",num)
	}else {
		fmt.Println("not found")
	}
	delete(a,"Cannavaro")
	for key,value := range a{
		fmt.Printf("key %s, value %d",key,value)
		fmt.Println()
	}
}
