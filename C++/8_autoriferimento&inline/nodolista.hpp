#include <iostream>
using namespace std;

class NodoLista{
	public: 
		NodoLista();
		NodoLista * successore;
		void link(NodoLista &n);
		inline int func(){return 3;}
};
