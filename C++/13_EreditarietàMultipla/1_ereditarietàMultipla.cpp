#include <iostream>
using namespace std;

class Vehicle{
	protected:
		double acceleration;
	public:
		Vehicle (){};
	virtual ~Vehicle () {}
	virtual void accelera() const {
		cout << "Vehicle Accelerating" <<endl;
	}
	void setAccelerazione(double a){
		acceleration = a;
	}
	double getAccelerazione() const {
		return acceleration;
	}
};

class Car: public Vehicle{
	public:
		Car() {}
	virtual ~Car() {}
	virtual void accelera() const{
		cout << "Accelera Auto" << endl;
	}
	virtual void guida() const{
		cout << "guida auto" << endl;
	}
};

class JetCar: public Car{
	public:
		JetCar(){}
	virtual ~JetCar(){}
	virtual void guida() const{
		cout << "guida JetCar" << endl;
	}
	virtual void vola() const{
		cout << "JetCar vola" << endl;
	}
};

void Analize(Car* p){
	// p->vola(); //ERRORE
}


int main(){
	Car c;
	Car* pc=&c;
	JetCar jc;
	Car* pjc=&jc;
	Analize(pjc); 
	//Analize(pc); //errore ---> *soluzione Percolating up (aggiungo il metodo vola in Car)
	//			      *soluzione Casting down
	//			      *soluzione Casting down con RTTI (Runtime Type Identification)
}
