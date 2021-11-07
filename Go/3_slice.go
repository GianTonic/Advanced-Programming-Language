package main
import(
	"fmt"
	)
	
func main(){
	array := [] int {1,2,3,4,5,6,7,8,9,10}
	arrayslice := array[1:3]
	fmt.Printf("Lenght of slice %d capacity %d",len(arrayslice),cap(arrayslice))
}
