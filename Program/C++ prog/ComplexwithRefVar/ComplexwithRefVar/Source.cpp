#include<iostream>
using namespace std;
#include<string.h>

class Complex
{
	int real;
	int imag;

public:
	/* constructor()
	{
	this->real = 0;
	this->imag = 0;

	}*/
	Complex(int a, int b)
	{
		real = a;
		imag = b;
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
void add(Complex&);

int main()
{
	//constructor c1;

	//c1.display();

	Complex c2(10, 20);
	cout << "Values Before Ref Variable";
	c2.display();
	cout << "\n";
	add(c2);
	cout << "\nValues After Ref Variable";
	c2.display();

	cout << "\n\n";
}

void add(Complex& r)
{
	r.setReal(30);
	r.setImag(40);
}