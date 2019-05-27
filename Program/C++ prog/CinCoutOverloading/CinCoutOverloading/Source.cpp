#include <iostream> 
using namespace std;

class Complex
{
private:
	int real, imag;
public:
	friend ostream & operator << (ostream &, const Complex &);
	friend istream & operator >> (istream &, Complex &);

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

ostream & operator << (ostream &o,Complex &c)
{
	o << c.getReal() << "+" << c.getImag()<< 'i' << endl;;
	 
	return o;
}

istream & operator >> (istream &i, Complex &c)
{
	i >> c.real >> c.imag;
	return i;
}

int main()
{
	Complex c1;

	Complex c2(10,30);

	cout << c1<<c2;
	cin >> c1;

	cout << c1;
	return 0;
}
