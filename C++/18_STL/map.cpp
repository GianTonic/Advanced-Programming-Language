#include <iostream>
#include <map>
using namespace std;
int main(){
	map <int,int> m;
	map<int,int>::iterator i;
	m[10] = 1;
	m[12] = 1;
	m[13] = 1;
	m[14] = 1;
	for(i = m.begin(); i != m.end(); i++){
		cout <<i->first<<"-"<<i->second<<endl;
	}
}
