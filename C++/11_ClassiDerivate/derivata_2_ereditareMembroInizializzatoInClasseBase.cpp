#include<iostream>
using namespace std;
class Punto{
    public:
        int x;
        int y;
    Punto(int x, int y){
        this->x=x;
        this->y=y;
    }
    Punto(){

    }
    void Stampa(){
        cout<<"X: "<<to_string(x)<<" Y: "<<to_string(y)<<endl;
    }
};
class PuntoColorato: public Punto{
    public:
     string colore;
     PuntoColorato(string colore,int x,int y):Punto(x,y){
        this->colore=colore;
     }
     void Stampa(){
        Punto::Stampa();
        cout<<"Colore: "<<this->colore<<endl; 
     } 
};
int main(){
    PuntoColorato p("giallo",3,3);
    cout<<p.x<<endl;
    cout<<p.y<<endl;
    p.Stampa();
}
