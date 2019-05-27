#include<iostream>
using namespace std;
#include<string.h>

class Complex
{
	int real;
	int imag;

public:
	Complex()
	{
	this->real = 0;
	this->imag = 0;

	}
	Complex(int a, int b)
	{
		real = a;
		imag = b;
	}

	Complex(const Complex &c)
	{
		real = c.real;
		imag = c.imag;
	}
	void setReal(int r)
	{
		real = r;
	}
	void setImag(int i)
	{
		imag = i;

	}

	
	void display()
	{
		cout << "\nReal Number Is :" << real << "\nimag number Is :" << imag;
	}

};


int main()
{
	Complex c1;
	cout << "Default Constructor :\n";
	c1.display();
	Complex c2(10, 20);
	cout << "Parameterized Constructor :\n";
	cout << "Values are :\n";
	c2.display();
	cout << "\nCopy Constructor :\n";
	Complex c3 = c2;
	c3.display();
	
	


	cout << "\n\n";
}

