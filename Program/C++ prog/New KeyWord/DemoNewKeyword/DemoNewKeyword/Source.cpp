/*#include<iostream>
using namespace std;

int main()
{
	int i;
	int * ptr;
	ptr = new int[5];
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ptr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", ptr[i]);
	}

}*/


#include<iostream>
using namespace std;
#include<string.h>

 class Complex
{
	int real;
	int imag;

public:
	friend ostream& operator<<(ostream&, Complex);
	friend istream& operator>>(istream&, Complex);
	Complex()
	{
		cout << "inside default\n";
		this->real = 0;
		this->imag = 0;

	}
	Complex(int a, int b)
	{
		cout << "inside Parametrrized ";
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


Complex operator+(int, Complex);
int main()
{
	/*New Keyword
	int n;
	Complex* ptr = new Complex[5];
	Complex *ptr1 = new Complex(10, 20);
	ptr1->display();*/


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
	Complex c1;
	Complex c2(10,20);
	Complex c3;
	cin >> c1;
	cout << c1 << c2;
	
	//cout << c2.real;
	
	
cout << "\n\n";
}

ostream& operator<<(ostream& o, Complex c1)
{
	o << c1.getReal() << '+' << c1.getImag() << 'i'<<endl;
	return o;
}
istream& operator>>(istream& i, Complex c1)
{
	i >> c1.setReal(15) >> c1.setImag(16);
	return i;
}
Complex operator+(int a, Complex c2)
{
	Complex temp;
	temp.setReal(a + c2.getReal());
	temp.setImag(a + c2.getImag());

	return temp;
}


