#include<stdio.h>
#include<string.h>

class Complex
{
	int real;
	int imag;

public:
	void setReal(int a)
	{
		this->real = a;
	}

	void setImag(int b)
	{
		this->imag = b;
	}

	
	Complex add(Complex c2)
	{
		Complex temp;
		temp.real = c2.real + this->real;
		temp.imag = c2.imag + this->imag;

		return temp;
	}

	Complex add(int a)
	{
		Complex temp;
		temp.real = a + this->real;
		temp.imag = a + this->imag;
		return temp;

	}

	void display()
	{
		printf("Real Number is %d + Imaginary Number is %di\n", this->real, this->imag);
		

	}

};

int main()
{
	Complex c1,c2;
	c1.setReal(20);
	c1.setImag(10);
	c1.display();

	c2.setReal(5);
	c2.setImag(1);

	c2.display();

	Complex c3;
	c3 = c1.add(c2);
	c3.display();
	Complex c4;
	c4 = c1.add(10);
	c4.display();
	

}