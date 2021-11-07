package main
import "fmt"

type Interface interface{
	Len() int
}

type Point struct{
    x,y int
}

type namedPoint struct{
    Point
    name string
}

func (p *Point) Len()int{
    return ((p.x*p.x)+(p.y*p.y))
}

func main(){
    p := &Point{x:1,y:1}
    np := &namedPoint{Point:Point{x:2,y:2},name:"Named Point"}
    var vector[]Interface = []Interface{p,np}
    for _,v:=range vector{
        fmt.Println(v.Len())
    }
}
