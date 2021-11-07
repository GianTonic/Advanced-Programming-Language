#include <iostream>
#include <fstream>
using namespace std;

//cin e cout sono oggetti associati allo stream/dispositivo standard di IN/OUT e sono definiti nell' header iostream 

int main(){
int x=1;
ofstream fileOutput; // ofstream oggetto associato allo stream di OUT su file e definito nell' header fstream
fileOutput.open("file_write.txt",ios::out);
fileOutput << x;
fileOutput.close();
}
