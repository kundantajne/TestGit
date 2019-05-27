#include<iostream>
using namespace std;
class ClassWithVirtualFunctions{

public:
	virtual void display(){
	}
};

int main(){

	cout << sizeof(ClassWithVirtualFunctions) << endl;

	return 0;
}