#include "class.hpp"

Data::Data(){
	cout <<"invocato costruttore di base "<<x<<endl;
}
Data::Data(int g,int m,int a){
	this->giorno =g;
	this->mese = m;
	this->anno =a;
	cout <<"invocato costruttore con param"<<endl;
}
Data::Data(Data& d){
	this->giorno = d.giorno;
	this->mese = d.mese;
	this->anno = d.anno;
	cout <<"invocato costruttore di copia"<<endl;
}
Data::~Data(){
	cout <<"invocato distruttore"<<endl;
}

void Data::aggiungi_ora(const int ora){
	this->ora=ora;
}

int Data::getGiorno()const{
	return this->giorno;
}
void Data::setGiorno(const int giorno){
	this->giorno=giorno;
}

int Data::getMese()const{
	return this->giorno;
}
void Data::setMese(const int mese){
	this->mese=mese;
}

int Data::getAnno() const{
	return this->anno;
}
void Data::setAnno(const int anno){
	this->anno=anno;
}
