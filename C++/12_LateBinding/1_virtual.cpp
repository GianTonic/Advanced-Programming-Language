#include <iostream>
using namespace std;

class Base
{
public:
    int member;
    Base() { cout<<"Inizializzazione costrutto Base()"<<endl; }
    Base(int x) { cout<<"Inizializzazione costrutto Base(int x)"<<endl; }
    virtual void stampa(){ cout<<"stampa di Base"<<endl; }
};

class Derivata : public Base
{
public:
    int member;
    //Sovrascrive member di Base
    int member1;
    Derivata() { cout<<"Inizializzazione costrutto Derivata()"<<endl; }
    void stampa(){ cout<<"stampa di Derivata"<<endl; }
    //void stampa() override { cout<<"stampa di Derivata"<<endl; }
};

int main(){
    Derivata d;
    Base *punt = &d;
    punt -> stampa(); //stampa della classe derivata
}
