#include <iostream>
using namespace std;

class Data{
	public:
		Data();
		Data(Data &d); //Costruttore di copia
		Data(int g,int m,int a); //costruttore con parametri
		~Data(); //distruttore
		
		static int x;
		static void staticFunz(int y){
			x = y;
			cout<<x<<endl;
		}
		
		void aggiungi_ora(const int ora); //membro funzione
		int getGiorno() const;
		void setGiorno(const int giorno);
		int getMese()const;
		void setMese(const int mese);
		int getAnno()const;
		void setAnno(const int anno);
	private:
		int giorno,mese,anno,ora; //membri Dati
		
};
