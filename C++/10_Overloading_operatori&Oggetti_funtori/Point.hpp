#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Point{
	private:
		double v[2];
	public:
		Point();
		Point(double x, double y);
		
		inline Point operator+(const Point& p) const{
			return Point(this->v[0]+p.v[0],this->v[1]+p.v[1]);
		}	
		
		inline Point& operator+=(const Point& p){ //il membro non è costante, ritorna il rif. a se stesso per op in cascata
			this->v[0]+=p.v[0];
			this->v[1]+=p.v[1];
			return *this;	//se metto const alla fine mi da errore
		}	
		
		inline Point operator()(){
   		 return Point(v[0]*v[0], v[1]*v[1]); 
		}
		
		void printPoint();
};
