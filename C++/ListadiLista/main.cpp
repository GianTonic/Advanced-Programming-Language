#include<iostream>
#include"nodoGiocatore.h"
#include"nodoSquadra.h"
#include"nodoCampionato.h"

int main(){
    nodoSquadra *milan = new nodoSquadra("milan");
    nodoGiocatore *ng1 = new nodoGiocatore("Giovanni",'a',25);
    nodoSquadra *juventus = new nodoSquadra("Juventus");
    nodoGiocatore *ng2 = new nodoGiocatore("Stefano",'a',25);
    milan->aggiungiNodoGiocatore(1,*ng1);
    milan->aggiungiNodoGiocatore(2, *ng2);
    juventus->aggiungiNodoGiocatore(1, *ng2);
    nodoCampionato *nc = new nodoCampionato("serie A");
    nc->aggiungiNodoSquadra(*milan);
    nc->aggiungiNodoSquadra(*juventus);
    std::cout <<"\nNome campionato: " << nc->getNomeNodoCampionato()<<"\n\n";
    nc->printNodiSquadre();
}