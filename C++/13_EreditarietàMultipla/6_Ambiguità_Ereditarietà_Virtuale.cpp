#include <iostream>
using namespace std;

/*
LA CLASSE BASE E' VEHICLE.
SIA JET CHE CAR EREDITANO DA VEHICLE.
JETCAR EREDITA SIA DA CAR CHE DA JET.
QUANDO UNA MEMBRO DI JETCAR VIENE CHIAMATA C'E' UNA NUOVA AMBIGUITA'.
Occore usare la parola chiave virtual in ogni classe intermedia x specificare che solo una copia della classe base deve essere creata.
In questo modo la classe base viene inizializzata dalla classe + lontana nell albero di derivazione.
*/

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

class Car: virtual public Vehicle{
	public:
		Car() {cout << "Costruttore Car" <<endl;}
	virtual ~Car() {cout << "Distruttore Car" <<endl;}
	virtual void accelera() const{
		cout << "Accelera Auto" << endl;
	}
	virtual void guida() const{
		cout << "guida auto" << endl;
	}
};

class Jet: virtual public Vehicle {
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
};

int main(){
	//solo jetcar istanzia vehicle xk è stata aggiunta l'ereditarietà virtual nella classi intermedie
	JetCar jc;
	jc.setAccelerazione(10.0); 
	cout<<jc.getAccelerazione()<<endl; 
}

