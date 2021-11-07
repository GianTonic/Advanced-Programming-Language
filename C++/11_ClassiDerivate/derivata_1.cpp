#include <iostream>
using namespace std;

class Base
{
public:
    int member;
    Base() { cout<<"Inizializzazione costrutto Base()"<<endl; }
    Base(int x) { 
    	cout<<"Inizializzazione costrutto Base(int x)"<<endl; 
    }
    void stampa(){cout << "metodo stampa di Base"<< endl;}
};

class Derivata : public Base // la nuova classe eredita tutti gli attributi 
{
public:
    //int member;
    //Sovrascrive member di Base
    int member1;
    Derivata() { cout<<"Inizializzazione costrutto Derivata()"<<endl; }
    Derivata(int x){ 
    	cout<<"Inizializzazione costrutto Derivata(int x)"<<endl; 	
    }
    void stampa(){
    	Base::stampa();
    	cout <<"Metodo stampa di Derivata"<< endl;
    }
};

int main(){
    Derivata d; //viene invocato sia costruttore di Base() che di Derivata()
    Derivata D(2); //viene invocato il costruttore di Base() e Derivata(int x)
    d.stampa();
}
