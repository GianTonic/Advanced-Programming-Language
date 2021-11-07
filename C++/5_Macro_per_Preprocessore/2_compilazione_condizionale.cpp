#include <iostream>
using namespace std;
#define SINGOLA_PRECISIONE
#ifdef SINGOLA_PRECISIONE
	float v[32];
	float x = 3.0;
#else
	double v[32];
	double x =4.0;
#endif
int main(){
    cout<<typeid(x).name()<<endl;
    cout<<x<<endl;
}
