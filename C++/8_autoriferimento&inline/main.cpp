#include "nodolista.hpp"

int main(){
	NodoLista *n1 = new NodoLista();
	NodoLista *n2 = new NodoLista();
	n1->link(*n2); //link vuole una reference, siccome n2 è un puntatore con l' * di questa istruzione accedo al contenuto 
	cout<<n1->func()<<endl;
}
