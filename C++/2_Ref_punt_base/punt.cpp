#include <iostream>
using namespace std;

int main(){
	int x = 5;  // se x ha ind 1000
	int *p = &x; //p variabile che contiene 1000
	//devo dereferenziare
	cout <<*p<<endl;
	//reference (alias)
	int &r= x; //r variabile che contiene 1000
	//non ho bisogno di dereferenziare
	cout <<r<<endl;
	
	//PUNTATORE A VOID
	void *pv = &x; 
	int *pi;
	pi = (int *)pv;
	cout <<*pi<<endl;
}
