#include<stdio.h>
#include<string>

class Operatorover
{
	int real, imag;

public:
	void setReal(int a)
	{
		real = a;
	}
	void setImag(int b)
	{
		imag = b;
	}

	void display()
	{
		printf("Real Number is %d + Imaginary Number is %di\n", this->real, this->imag);
		printf("**************************************************\n\n");


	}

	/*Addtion*/
	Operatorover operator +(Operatorover x)
	{
		Operatorover temp;
		temp.real = x.real + real;
		temp.imag = x.imag + imag;
		printf("Addtion Of Real And Imag Numbers Are :  \n");

		return temp;
	}

	Operatorover operator +(int a)
	{
		Operatorover temp;
		temp.real = real + a;
		temp.imag = imag + a;
		return temp;
	}

	/*Subtraction*/

	Operatorover operator -(Operatorover x)
	{
		Operatorover temp;
		temp.real = real-x.real;
		temp.imag = imag-x.imag;
		printf("Subtraction Of Real And Imag Numbers Are :  \n");

		return temp;
	}


	Operatorover operator -(int a)
	{
		Operatorover temp;
		temp.real = real - a;
		temp.imag = imag - a;
		return temp;
	}




};

int main()
{
	Operatorover o1,o2;
	printf("o1 Number\n");
	o1.setReal(10);
	o1.setImag(20);
	o1.display();

	printf("o2 number\n");
	o2.setReal(5);
	o2.setImag(2);
	o2.display();

	Operatorover o3;
	o3 = o1 + o2;
	o3.display();
	Operatorover o4;
	o4 = o1 + 10;
	o4.display();
	Operatorover o5;
	o5 = o1 - o2;
	o5.display();
	Operatorover o6;
	o6 = o1 - 10;
	o6.display();




}