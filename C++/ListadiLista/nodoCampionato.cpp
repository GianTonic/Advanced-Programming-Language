#include "nodoCampionato.h"

nodoCampionato::nodoCampionato(string nomeCampionato){
 this->nomeNodoCampionato = nomeCampionato;

}

nodoCampionato::~nodoCampionato() {

}

string nodoCampionato::getNomeNodoCampionato(){
    return this->nomeNodoCampionato;
}

bool nodoCampionato::aggiungiNodoSquadra(nodoSquadra nodoSquadra){
    this->Nodisquadre.push_back(nodoSquadra);
    return true;
}

void nodoCampionato::printNodiSquadre(){
    for(std::list<nodoSquadra>::iterator it=this->Nodisquadre.begin(); it != this->Nodisquadre.end(); ++it){
        std::cout << (*it).getNomeNodoSquadra() << "\n";
        (*it).printNodiGiocatore();
    }

}