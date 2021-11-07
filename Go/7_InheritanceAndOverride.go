package main
import "fmt"

type Point struct{
	x,y int
}

func (p *Point)setCoordinate(x,y int){
	p.x = x
	p.y = y
}

type namedPoint struct{
	Point //anonymous field to obtain inheritance
	name string
}

type threeDpoint struct{
	namedPoint
	z int
}

func (tdp *threeDpoint)setCoordinate(x,y,z int, s string){
    tdp.Point.setCoordinate(x,y)
    tdp.name = s
    tdp.z= z
}

func main(){
         //np := &namedPoint{Point{0,0},"named point"}
         //or
	 np := &namedPoint{Point:Point{x:0,y:0},name:"named point"}
	 //or
	 //np := &namedPoint{name:"named point"}
	 //np.x=0
	 //np.y=0
	 np.setCoordinate(1,1) //inheriting method
	 fmt.Println(np.x,np.y,np.name)
	 
	 //Now i want ovverride method with class threeDpoint
	 tdp := &threeDpoint{namedPoint:namedPoint{Point:Point{x:0,y:0},name:"empty"},z:0}
	 tdp.setCoordinate(1,1,1,"3D point")
	 fmt.Println(tdp.x,tdp.y,tdp.z,tdp.name)
	 
}
