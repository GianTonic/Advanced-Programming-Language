#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception {
	public:
		const char * what(){
			return "C++ Exception";
		}
		/*
		const char * what() throw () {
			return "C++ Exception";
		}
		*/
};

int main() {
	try {
		throw MyException();
	}catch(MyException& e) {
		cout << "MyException caught" << endl;
		cout << e.what()<< endl;
	}catch(exception& e) {
		//Other errors
		cout<<e.what()<<endl;
	}
}
