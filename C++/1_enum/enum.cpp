#include <iostream>
using namespace std;

enum Color{red = 1, green, blue};
Color r = red;
int main(){
switch(r)
{
    case red  : cout << r;   break;
    case green: cout << "green\n"; break;
    case blue : cout << "blue\n";  break;
}
}
