// 03/12/2929 23 min

#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

const int PORT = 8080;

using namespace std;

int main(int argc, char const *argv[]){

 int sock = 0, valread;
 struct sockaddr_in serv_addr;
 char buffer[1024]={0};
 string hello = "Hello from client " + string(argv[1]);
 
 if ((sock = socket(AF_INET, SOCK_STREAM,0)) < 0){
     cout << "Socket creation error" << endl;
     return -1;
 } 

 serv_addr.sin_family = AF_INET;
 serv_addr.sin_port = htons(PORT);

 //Coonverte IPv4 da testo in binario. Vado a mettere l0indirizzo in sin_addr
 if(inet_pton(AF_INET,"127.0.0.1", &serv_addr.sin_addr)<=0){
     cout << "\nInvalid address/ Address not supported" <<endl;
     return -1;
 }

// connect si blocca xk tcp genera un flag di connessione e lo manda a livello di trasporto remoto. Se c'è un servizio in ascolto alla porta 8080 il TCP lato server risponde con un SIN+ACK
 if (connect(sock,(struct sockaddr *)&serv_addr, sizeof(serv_addr))<0){
   cout <<"connection Failed" << endl;
   return -1;
 }

 send(sock, hello.c_str(),hello.size(),0);
 cout << "Hello message sent" <<endl;
 valread = read(sock, buffer,1024);
 cout << buffer << endl;
 return 0;

}