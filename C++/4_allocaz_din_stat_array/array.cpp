#include<iostream>
using namespace std;
int main(){
    int *x=new int[10]{1,2,34,5,6,4,5,3};
    cout<<x[5]<<endl;
    delete[] x;
    cout<<*x<<endl;
    int y[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<y[1]<<endl;
}

