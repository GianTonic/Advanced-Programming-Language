#include "class.hpp"

int Data::x;

int main(){
//Data d_stat();
Data d_stat(1,2,3);
Data *d_din = new Data(1,2,3);
Data &d=d_stat;
Data d_copia(d); //oppure come a sotto
//Data d_copia(const Data& d);
Data::staticFunz(4);
Data e;
Data f;


}
