#include <iostream>
#include <fstream>
using namespace std;

int main(){
int x;
ifstream fileInput;
fileInput.open("file_read.txt",ios::in);
fileInput >> x;
fileInput.close();
cout<<x<<endl;
}
