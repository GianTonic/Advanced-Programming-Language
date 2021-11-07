#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> l;
	list <int>::iterator i;
	l.push_front(9);
	l.push_front(10);
	l.push_front(11);
	for(i=l.begin();i!=l.end();i++){
	//i punta al primo elemento di l
		cout <<*i<<endl;
	}
}
