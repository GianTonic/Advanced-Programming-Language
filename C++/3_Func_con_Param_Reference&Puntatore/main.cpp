#include <iostream>
using namespace std;

void f1(int *p){
	cout<<"stampa param di f1 "<<*p<< endl;
}

void f2(int &r){
	cout<<"stampa param di f2 "<<r<< endl;
}

int main(){
	int x = 5;
	int *px = &x;
	int &rx = x;
	f1(px);
	f2(rx);
	f1(&x);
	f2(x);
}
