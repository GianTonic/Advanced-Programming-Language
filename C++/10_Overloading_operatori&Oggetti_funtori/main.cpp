#include "Point.hpp"

int main(){
	Point p1(1,1);
	Point p2(2,2);
	Point p3(3,3);
	p3 = p1+p2;
	p3.printPoint(); //3 3 
	p1 +=(p2+=p3); //operazione in cascata
	p1.printPoint(); //6 6 
	p2=p3();
	p2.printPoint(); //9 9
}
