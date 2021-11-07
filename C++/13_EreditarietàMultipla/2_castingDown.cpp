#include <iostream>
using namespace std;

enum tipoVeicolo{vehicle,car,jetcar};

class Vehicle{
	protected:
		double acceleration;
	public:
		Vehicle (){cout << "Veicolo::Veicolo()" << endl;}
		virtual ~Vehicle () {}
		
		tipoVeicolo tv=vehicle;
		
		virtual tipoVeicolo who(){
			return tv;
		}
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
		Car() {
			this -> tv=car;
		}
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
		JetCar(){
			this -> tv=jetcar;
		}
		virtual ~JetCar(){}
		
		virtual void guida() const{
			cout << "guida JetCar" << endl;
		}
		virtual void vola() const{
			cout << "JetCar vola" << endl;
		}
};

void Analize(Car* test ){
    if(test->who()==car){
        test->guida();
    }
    if(test->who()==jetcar){
        ((JetCar*) test)->vola(); 
    }
}

int main(){
	Vehicle v;
	Car c;
	JetCar j;
	cout<<v.who()<<endl;
	cout<<c.who()<<endl;
	cout<<j.who()<<endl;
	Analize(&j);
}

