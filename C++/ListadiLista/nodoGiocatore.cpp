/*
 * nodoGiocatore.cpp
 *
 *  Created on: 28 nov 2020
 *      Author: giovanni
 */

#include "nodoGiocatore.h"

nodoGiocatore::nodoGiocatore(string nome,char ruolo,int eta) {
	this->nomeGiocatore=nome;
	this->ruolo=ruolo;
	this->eta=eta;
}

string nodoGiocatore::getNomeGiocatore(){
	return this->nomeGiocatore;
}
bool nodoGiocatore::setNomeGiocatore(string nomeGiocatore){
	 this->nomeGiocatore=nomeGiocatore;
	 return 1;
}

char nodoGiocatore::getRuolo(){
	return this->ruolo;
}
bool nodoGiocatore::setRuolo(char ruolo){
	
	 this->ruolo=ruolo;
	 return 1;
}

int nodoGiocatore::getEta(){
	return this->eta;
}
bool nodoGiocatore::setEta(int eta){
	
	 this->eta=eta;
	 return 1;
	
}




nodoGiocatore::~nodoGiocatore() {
}

