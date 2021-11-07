#include "Point.hpp"
Point::Point(){
	this->v[0]=0.0;
	this->v[1]=0.0;
}
Point::Point(double x, double y){
	this->v[0]=x;
	this->v[1]=y;
}

void Point::printPoint(){
	for(int i=0;i<2;i++){
		cout << this->v[i]<<" ";
	}
	cout<<endl;
}

