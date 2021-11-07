#include <iostream>
#include <string>
using namespace std;

int main(){
	try{
		char* s;
		s = new char[10];
		if(s == NULL) throw "Allocazone fallita";
		for (int n=0; n<=100;n++){
			if (n>9) throw n;
			s[n]='m';
		}
	}catch(int i){
		cout << "Eccezione: index "<<i<<", Indice non valido"<<endl;
	}catch(char *s){
		cout << "Eccezione "<<s<<endl;
	}
	
}
