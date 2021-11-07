#include <iostream>
#include <fstream>
using namespace std;
template <class T>
class Box{
    public:
        T a=T();
        
        Box* max(Box* second){
            return this->a > second->a ? this :second;
        }
};
class Blocco{
    public:
        int m;
    inline bool operator>(Blocco b){
        return this->m >b.m ? true: false ;
    }
    friend std::ostream& operator<<( ostream &output, const Blocco b ) { 
         output << "F : " << b.m <<endl;
         return output;            
      }
};

int main(){
    Box<Blocco>* b1=new Box<Blocco>();
    b1->a.m=5;
    Box<Blocco>* b2=new Box<Blocco>();
    b2->a.m=6;
    Box<Blocco>* b3=new Box<Blocco>();
    b3=b2->max(b1);
    std::cout<<b3->a.m<<std::endl;

}