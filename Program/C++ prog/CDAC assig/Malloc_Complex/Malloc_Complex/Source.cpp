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
	int getReal()
	{
		return real;
	}

	int getImag()
	{
		return imag;
	}


	void display()
	{
		cout << "\nReal Number Is :" << real << "\nimag number Is :" << imag;
	}

};

Complex* myfun();
int main()
{
	int n;
	Complex* ptr = myfun();
	cout << "enter the size\n";
	cin >> n;
	cout << "Values Of Complex :\n";
	for (int i = 0; i <n; i++)
	{
		cout << "\n";
		ptr[i].display();
		//cout << "Real Values :" << ptr[i].getReal()<<endl;
		//cout << "Imag Values :" << ptr[i].getImag()<<endl;
	}

	

	
	

	/*Complex c1;
	cout << "Default Constructor :\n";
	c1.display();
	Complex c2(10, 20);
	cout << "Parameterized Constructor :\n";
	cout << "Values are :\n";
	c2.display();
	cout << "\nCopy Constructor :\n";
	Complex c3 = c2;
	c3.display();*/




	cout << "\n\n";
}

Complex* myfun()
{
	Complex* ptr;
	int  i;
	
	ptr = new Complex[5];
	for (i = 0; i <5; i++)
	{
		ptr[i].setReal(10);
		ptr[i].setImag(20);

	}

	//delete(ptr);
	return ptr;
}

