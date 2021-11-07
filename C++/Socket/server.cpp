/*
Tale programma manda una stringa  "Hello from server" al client
*/

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h> //serve x istanz qualche struttura che servirà ai socket

//server in ascolto sulla porta 8080.Il server si crea istanziando una socket, facendo il bind su una porta (chiamando una funz listen che serve a creare il back log, cioè il numero di richieste pendenti che può accettare) e poi difatto il server chiama l'acceptby in attesa che arrivino richieste  
const int PORT = 8080;

using namespace std;

int main(int argc, char const *argv[]){
    //serverfd e new_socket vengono utilizzati per il costruttore del socket
    int server_fd, new_socket, valread;
    //struct sockaddr_in sarà dentro la netinet (Non lo sa). Comunque serve per passare info alla socket (in particolare nella bind)
    struct sockaddr_in address;
    int addrlen=sizeof(address);
    char buffer[1024]={0};
    string hello = "Hello from server"; 
    
    /*la prima cosa da fare è popolare la struttura address con gli attributi che ci interessano
    * sin_family (def. la famiglia di portocolli che sto utilizzando) = AF_INET (famiglia protocolli di internet cioè TCP e UDP. Cost. definita nei file.h)
    * sin_addr.s_addr=INADDR_ANY (vuol dire che stiamo in ascolto su qualsia ind. ip, xk al pc potrebbero essere stati assegnati + ind. ip )
    * sin_port (def. la porta su cui stiamo in ascolto) = htons(PORT) (htons serve a trasformare la porta scritta come intero nel formato necessario x la struttura, cioè il binario)
    */
    address.sin_family=AF_INET;
    address.sin_addr.s_addr= INADDR_ANY;
    address.sin_port = htons(PORT);

//Creaz socket
/*
*Dalla libreria sys/socket.h posso chiamare socket()
*Nel nostro caso abbiamo creato una socket che è un AF_INET, SOCK_STREAM-> utilizziamo stream TCP sullo stack protocollare di AF_INTERNET)
*La socket restituisce un descrittore. Equivalente a un file descriptor di tipo intero
*/
if((server_fd = socket(AF_INET, SOCK_STREAM, 0))== 0){
    //perror stampa il tipo di errore -> socket failed + num err.
    perror("socket failed");
    exit(EXIT_FAILURE);
}

//Bind porta 8080
/*
* Ora vogliamo agganciare la socket ad una determinata porta / indirizzo utilizzando la funz bind()
* 1o param: il socket descriptor, 
* 2o param: indirizzo della struttura addr che abbiamo riempito, ma non basta mettere &address ma dobbiamo dirgli che quello che gli stiamo passando è un puntatore alla struttura sockaddr (compatibile ma leggermente diversa dalla struct sockaddr_in xk ha + campi)
* 3o param: sizeof(talestruttura)
*/
if(bind(server_fd,(struct sockaddr *)&address,sizeof(address))==0){
    perror("bind failed");
    exit(EXIT_FAILURE);address
}

//Coda richieste pending
/*
* listen è 1 chiamata che serve x informare il s.o. sulla dim. della coda per le richieste pendenti.
* Ogni volta che arriva una richiesta di connessione al nostro server, lui la mette in coda e la processa.
* Se arrivano + richieste dobbiamo specificare nella listen quante richieste di connessione posso essere lasciate pending (non servite).
*/
if(listen(server_fd,3)<0){
    perror("listen");
    exit(EXIT_FAILURE);
}

//Accept
/*
* l'accept vuole il descrittore della socket , la struct, e la len della struct.
* Tale funzione è bloccante, cioè non appena il server chiama l'accept si blocca. L' accept non restituisce subito il controllo al programma chiamante, ma al s.o., che mette il processo che ha chiamato accept() in uno stato di wait, cioè di attesa che arrivi una connessione.
* Non appena arriva una richiesta di connessione il controllo ritorna al chiamante. Cioè l'accept termina e restituisce un nuovo descrittore della socket, il quale sarà utile a parlare con il client che ha fatto la richiesta.
*/
    while(true){
        if((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen))<0){
            perror("accept");
            exit(EXIT_FAILURE);

        }

/* Read
* La read() legge i dati dalla socket e popola il buffer fino a 1 max di 1024 caratteri.
* Restituisce il numero di caratteri letti. 
*/
        valread= read(new_socket, buffer, 1024);

//Printo i caratteri inviati dal client
        cout << buffer <<" "<< valread <<endl;

//Send
        send(new_socket, hello.c_str(), hello.size(),0);
        cout <<"Hello message sent" << endl;

        sleep(10); //ci vogliono 10 sec per servire una richiesta. In quesi 10 secondi se arrivano altre richieste verranno messe nel backlog. Questo è un server che non sa gestire + richieste contemporaneamente
    }

return 0;
}