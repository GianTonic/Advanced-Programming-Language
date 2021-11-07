#include <iostream>
using namespace std;
template<class T>
class Pila{
    public:
        int top;
        T s[100];
        Pila(){
            top=0;
        }
        void push(T& membro){
            top++;
            s[top]=membro;
        }
        T& pull(){
            top--;
            return s[top+1];
        }
        bool max(T& a, T& b ){
			if (a > b) return true;
			else return false;
		}
};
class Blocco{
    public:
        int n;
        Blocco(){
            
        }
        inline bool operator>(Blocco& b){
             if(n>b.n) return true;
             else return false;
        }
};
int main(){
    Pila<Blocco> pila=Pila<Blocco>();
    Blocco* b =new Blocco();
    b->n=9;
    Blocco* c =new Blocco();
    c->n=10;
    cout<<pila.max(*b,*c)<<endl;
    
    pila.push(*b);
    pila.push(*c);
    Blocco z=pila.pull();
    cout<<z.n<<endl;
}