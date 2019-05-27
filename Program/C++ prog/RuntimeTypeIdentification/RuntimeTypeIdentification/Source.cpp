#include<iostream>
using namespace std;
class MyClass
{
public:
	void test()
	{}
};
void main()
{
	int a;
	float f1;
	double d1;
	int *ptr;
	ptr = &a;

	MyClass Obj;
	cout << "\nType Of A is::" << typeid(a).name();
	cout << "\nType Of f1 is::" << typeid(f1).name();
	cout << "\nType Of d1 is::" << typeid(d1).name();
	cout << "\nType Of ptr is::" << typeid(ptr).name();
	cout << "\nType Of *ptr is::" << typeid(*ptr).name();

	cout << "\nType Of Obj is::" << typeid(Obj).name();

	cout << "\n\n\n";
}