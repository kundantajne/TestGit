#include<iostream>
using namespace std;
template<class t>
class MyClass
{
public:
	void swap(t &a, t &b)
	{
		t temp;
		temp = a;
		a = b;
		b = temp;
	}
	/*void swap(char &ch1, char & ch2)
	{
		int temp;
		temp = ch1;
		ch1 = ch2;
		ch2 = temp;
	}*/
};


int main()
{
	MyClass<int> m1;
	int a = 10;
	int b = 20;
	m1.swap(a, b);

	cout <<"A : "<<a <<endl<<"B : "<< b<<endl;
	


	MyClass<char> m2;

		char ch1='A';
		char ch2 = 'B';

		m2.swap(ch1, ch2);

		cout <<"Ch1 : "<< ch1 <<endl<<"ch2 : "<< ch2;

		cout << "\n\n\n";
}