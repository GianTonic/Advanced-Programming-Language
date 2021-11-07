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

class Jet: public Vehicle {
	public:
		Jet(){
		cout << "Costruttore Jet" <<endl;
	}
	virtual ~Jet(){
		cout << "Distruttore Jet" <<endl;
	}
	virtual void vola() const{
		cout << "sto volando" << endl; 
	}
};

class JetCar: public Car, public Jet{
	public:
		JetCar(){}
	virtual ~JetCar(){}
	virtual void guida() const{
		cout << "guida JetCar" << endl;
	}
	virtual void vola() const{
		cout << "JetCar vola" << endl;
	}
	virtual void setAccelerazione (double a ){
		Jet::setAccelerazione(a);
	}
	virtual double getAccelerazione() const{
		return Jet::getAccelerazione();
	}
};

int main(){
	JetCar jc;
	jc.setAccelerazione(10.0); 
	cout<<jc.getAccelerazione()<<endl; 
}

