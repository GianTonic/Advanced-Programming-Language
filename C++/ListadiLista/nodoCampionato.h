#include <iostream>
#include <string>
#include "nodoSquadra.h"
#include <list>


using namespace std;

class nodoCampionato {

private:
	string nomeNodoCampionato;
	list<nodoSquadra> Nodisquadre;
	//list<int, nodoGiocatore> :: iterator giocatoriIteratore;

public:
	nodoCampionato(string nomeNodoCampionato);
    
	virtual ~nodoCampionato();

	string getNomeNodoCampionato();

	bool aggiungiNodoSquadra(nodoSquadra squadra);

	void printNodiSquadre();

};
