#include "nodolista.hpp"

NodoLista::NodoLista (){}
void NodoLista::link(NodoLista &n){
	n.successore = this;
}
