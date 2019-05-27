#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Inside Base Constructor"<<endl;
	}
	virtual ~Base()
	{
		cout << "Inside Base Destructor" << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "Inside Derived Constructor" << endl;
	}
	~Derived()
	{
		cout << "Inside Derived Destructor" << endl;
	}
};

int main()
{
	Base* b1;
	b1 = new Derived();
	delete(b1);


	//Derived d1;
}