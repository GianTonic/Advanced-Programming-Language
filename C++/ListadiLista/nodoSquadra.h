/*
 * nodo.h
 *
 *  Created on: 28 nov 2020
 *      Author: giovanni
 */
#include <iostream>
#include <string>
#include "nodoGiocatore.h"
#include <list>

#ifndef NODO_H_
#define NODO_H_

using namespace std;

class nodoSquadra {

private:
	string nomeNodoSquadra;
	int punti;
	list<pair<int,nodoGiocatore>> giocatori;
	//list<int, nodoGiocatore> :: iterator giocatoriIteratore;

public:
	nodoSquadra(string nomeNodoSquadra);
	virtual ~nodoSquadra();

	string getNomeNodoSquadra();

	bool aggiungiNodoGiocatore(int id,nodoGiocatore nodoGiocatore);

	void printNodiGiocatore();

};

#endif /* NODO_H_ */
