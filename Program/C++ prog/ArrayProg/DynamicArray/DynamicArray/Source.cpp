#include<iostream>
using namespace std;

class Myarray
{
	int size;
	int *ptr;

public:

	Myarray()
	{
		this->size = 0;
		this->ptr = NULL;
	}

	Myarray(int s)
	{
		this->size = s;
		this->ptr = new int[size];
		for (int i = 0; i < s; i++)
		{
			this->ptr[i] = 0;

		}
	}
	void setSize(int s)
	{
		this->size = s;
		this->ptr = new int[size];
	}
	void setValues(int *arr,int s)
	{
		for (int i = 0; i < s; i++)
		{
			this->ptr[i] = arr[i];

		}
	}
	Myarray(Myarray & a)
	{
		this->size = a.size;
		this->ptr = new int[a.size];
		for (int i = 0; i < this->size; i++)
		{
			this->ptr[i] = a.ptr[i];
		}
	}

	Myarray operator=(Myarray a)
	{
		this->size = a.size;
		this->ptr = new int[size];
		for (int i = 0; i < size; i++)
		{
			this->ptr[i] = a.ptr[i];
		}
		return a;
	}


	void display()
	{
		for (int i = 0; i < size; i++)
		{
			cout << this->ptr[i];
		}

	}

	Myarray operator+(Myarray &a2)
	{
		int i = 0, j = 0;
		Myarray temp;
		temp.size = this->size + a2.size;
		temp.ptr = new int[temp.size];
		for ( i = 0; i < this->size; i++)
		{
			temp.ptr[i] = this->ptr[i];
		}
		for (j = 0; i < temp.size; i++, j++)
		{
			temp.ptr[i] = a2.ptr[j];
		}

		return temp;
	}
	int& operator[](int index)
	{
		
		if (index>=size )
		{
			cout << "array out of boundary";
		}
		
		return this->ptr[index];
	}
	friend ostream & operator << (ostream &, Myarray &);
	friend istream & operator>>(istream &, Myarray &);
	
	~Myarray()
	{
		delete(ptr);
	}
};
ostream & operator << (ostream & o, Myarray &a)
{
	if (a.size==0)
	{
		o << "/nArray is Empty\n";
	}
	else
	{
		o << "Values Of Array Is :\n";
		for (int i = 0; i < a.size; i++)
		{
			o << " " << a.ptr[i];

		}

	}
	
	
	return o;
	
}
istream & operator>>(istream &i, Myarray &a)
{

}



/*
int main()
{
Myarray a1(5);
Myarray a2(3);
Myarray a3;


int arr[5] = { 10, 20, 30, 40, 50 };
int brr[3] = { 60, 70, 80 };

a1.setValues(arr, 5);
a2.setValues(brr, 3);
cout << "a1 : ";
a1.display();
cout << "\n a2 :";
a2.display();
a3 = a1 + a2;
cout << a3;
Myarray a4 = a3;
cout << "\nAfter using copy Constructor :\n";
cout << a3;
cout << "\n\n\n";

}*/

int main()
{
	int brr[5] = { 10, 20, 30, 40, 50 };
	Myarray arr[3];
	arr[0].setSize(5);
	arr[0].setValues(brr, 5);
	//arr[0].display();
	cout << arr[0];
	cout << arr[1];

	Myarray a1(5);
	cout << a1;
	a1.setValues(brr, 5);
	cout << "\nValues at a1[1] :\n";
	cout << a1[1];

	cout << "\nNew Value is : \n";
	a1[1] = 100;
	cout << a1[1];

	//We are checking the size of array
	cout << "\n"<<a1[5];



	cout << "\n\n";
	Myarray *ptr = new Myarray(5);
	cout << *ptr;
	
}