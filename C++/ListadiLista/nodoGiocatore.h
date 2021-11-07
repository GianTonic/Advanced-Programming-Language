/*
 * nodoGiocatore.h
 *
 *  Created on: 28 nov 2020
 *      Author: giovanni
 */

#ifndef NODOGIOCATORE_H_
#define NODOGIOCATORE_H_

#include <iostream>
#include <string>
#include "nodoGiocatore.h"
#include <list>

using namespace std;

class nodoGiocatore {

private:
	string nomeGiocatore;
	char ruolo;
	int eta;

public:
	nodoGiocatore(string nomeGiocatore, char ruolo, int eta);
	virtual ~nodoGiocatore();

	string getNomeGiocatore();
	bool setNomeGiocatore(string nomeGiocatore);

	char getRuolo();
	bool setRuolo(char ruolo);

	int getEta();
	bool setEta(int eta);



};

#endif /* NODOGIOCATORE_H_ */
