#include<iostream>
using namespace std;
//template<class T>

class Complex
{
	int real;
	int imag;
	Complex* next;

public:
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(int a,int b)
	{
		real = a;
		imag = b;
	}
	void setReal(int a)
	{
		this->real = a;
	}

	void setImag(int b)
	{
		this->imag = b;
	}

	int getReal()
	{
		return this->real;
	}
	int getImag()
	{
		return this->imag;
	}


	/*Complex add(Complex c2)
	{
		Complex temp;
		temp.real = c2.real + this->real;
		temp.imag = c2.imag + this->imag;

		return temp;
	}*/


	void display()
	{
		printf("Real Number is %d + Imaginary Number is %di\n", this->getReal(), this->getImag());


	}
	void setNext(Complex* p)
	{
		this->next = p;
	}

	Complex* getNext()
	{
		return this->next;
	}
	friend ostream& operator<<(ostream &, SLL &);

};

class Node
{
	Complex data;
	Node* next;

public:
	Node(Complex d)
	{
		data = d;
		next = NULL;
	}
	void setData(Complex d)
	{
		data = d;
	}
	Complex getData()
	{
		return data;
	}

	
};
//template<class T>
class SLL
{
	Complex* start;

public:
	SLL()
	{
		start = NULL;
	}

	void insert(int r,int i)
	{
		Complex* nm = new Complex(r,i);

		if (this->start == NULL)
		{
			start = nm;
		}
		else
		{
			Complex* ep = start;
			while (ep->getNext() != NULL)
			{
				ep = ep->getNext();
			}
			ep->setNext(nm);
		}

	}
	/*void display()
	{
		cout << "Displaying Linked List : " << endl;
		Complex*ep = start;
		if (start == NULL)
		{
			cout << "Linked List Is Empty: \n";
		}
		else
		{
			while (ep != NULL)
			{
				cout << ep->getData() << " " << endl;
				ep = ep->getNext();

			}
			cout << ep->getData() << " " << endl;


		}

	}*/
	
};

ostream& operator<<(ostream &o, SLL & s)
{
cout << "Displaying Linked List : " << endl;
Complex *ep = s.start;
if (s.start == NULL)
{
o << "Linked List Is Empty: \n";
}
else
{
while (ep != NULL)
{

ep = ep->getNext();

}



}
return o;
}

int main()
{
	Complex c1(10, 20);

	SLL l1;
	l1.insert(c1);
	

	l1.display();
	//cout << l1;
	cout << "\n\n\n";
}
