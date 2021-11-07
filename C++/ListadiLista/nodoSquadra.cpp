/*
 * nodo.cpp
 *
 *  Created on: 28 nov 2020
 *      Author: giovanni
 */

#include "nodoSquadra.h"



nodoSquadra::nodoSquadra(string nomeNodoSquadra){
	this->nomeNodoSquadra = nomeNodoSquadra;
	this->punti = 0;
}

nodoSquadra::~nodoSquadra() {

}

string nodoSquadra::getNomeNodoSquadra(){
  return this->nomeNodoSquadra;
}


bool nodoSquadra::aggiungiNodoGiocatore(int id, nodoGiocatore ng){
    pair<int,nodoGiocatore> nuovoNodo = make_pair(id,ng);
    this->giocatori.push_back(nuovoNodo);
	  return true;

}

void nodoSquadra::printNodiGiocatore(){
  for (std::list<pair<int,nodoGiocatore>>::iterator it=this->giocatori.begin(); it != this->giocatori.end(); ++it){
    std::cout << (*it).first << " ";
    std::cout << (*it).second.getNomeGiocatore() << "\n";
  }
    std::cout << '\n';
  
}