package main
import "fmt"
func function1(a[3]int){fmt.Println(a)}
func function2(a *[3] int){fmt.Println(a)}
func function3(a *[3] int){
				for index,value:=range a{
					fmt.Printf("index:%d value:%d",index,value)
					fmt.Println()
				}
			   }
func main(){
	var ar[3]int
	function1(ar)
	function2(&ar)
	function3(&ar)
}
