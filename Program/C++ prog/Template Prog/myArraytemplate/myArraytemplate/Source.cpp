#include<iostream>
using namespace std;
template<class t>
class Myarray
{
	int size;
	t *ptr;

public:

	Myarray()
	{
		this->size = 0;
		this->ptr = NULL;
	}

	Myarray(int s)
	{
		this->size = s;
		this->ptr = new t[size];
		for (int i = 0; i < s; i++)
		{
			this->ptr[i] = 0;

		}
	}
	void setSize(int s)
	{
		this->size = s;
		this->ptr = new t[size];
	}
	void setValues(t *arr, int s)
	{
		for (int i = 0; i < s; i++)
		{
			this->ptr[i] = arr[i];

		}
	}
	Myarray(Myarray & a)
	{
		this->size = a.size;
		this->ptr = new t[a.size];
		for (int i = 0; i < this->size; i++)
		{
			this->ptr[i] = a.ptr[i];
		}
	}

	Myarray operator=(Myarray a)
	{
		this->size = a.size;
		this->ptr = new t[size];
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
			cout << this->ptr[i]<<" ";
		}
		cout << "\n";

	}

	Myarray operator+(Myarray &a2)
	{
		int i = 0, j = 0;
		Myarray temp;
		temp.size = this->size + a2.size;
		temp.ptr = new t[temp.size];
		for (i = 0; i < this->size; i++)
		{
			temp.ptr[i] = this->ptr[i];
		}
		for (j = 0; i < temp.size; i++, j++)
		{
			temp.ptr[i] = a2.ptr[j];
		}

		return temp;
	}
	t& operator[](t index)
	{

		if (index >= size)
		{
			cout << "array out of boundary";
		}

		return this->ptr[index];
	}
	friend ostream & operator << <>(ostream &, Myarray<t> &);
	//friend istream & operator>>(istream &,  &);

	~Myarray()
	{
		delete(ptr);
	}
};
template<class t>
ostream & operator << (ostream & o, Myarray<t> &a)
{
	if (a.size == 0)
	{
		o << "/nArray is Empty\n";
	}
	else
	{
		//o << "Values Of Array Is :\n";
		for (int i = 0; i < a.size; i++)
		{
			o << " " << a.ptr[i];

		}
		o << "\n";
	}


	return o;

}





int main()
{

	cout << "******************************integer************************"<<endl;
Myarray<int> a1(5);
Myarray<int> a2(3);
Myarray<int> a3;


int arr[5] = { 10, 20, 30, 40, 50 };
int brr[3] = { 60, 70, 80 };

a1.setValues(arr, 5);
a2.setValues(brr, 3);
cout << "a1 : "<<a1<<endl;
//a1.display();
cout << " a2 :"<<a2;
//a2.display();
a3 = a1 + a2;
cout << a3;
Myarray<int> a4= a3;
//a4.display();

//cout << "\nAfter using copy Constructor :\n";
//cout << a3;



//For Double Datatype:-
cout << "*****************Double***********************" << endl;
Myarray<double> d1(2);
Myarray<double> d2(2);
Myarray<double> d3;

double arr1[2] = { 5.66, 4.77 };
double brr1[2] = { 6.76, 8.6 };
d1.setValues(arr1, 2);
d2.setValues(brr1, 2);

cout << "\nd1 :" << d1 << endl;

d3 = d1 + d2;

cout << "d3 : " <<d3<< endl;


//For character:-
cout << "***********Char*********************"<<endl;
Myarray<char> c1(2);
Myarray<char> c2(2);
Myarray<char> c3;

char arr2[2]={'k', 'p'};
char brr2[2] = { 's', 'T' };
c1.setValues(arr2, 2);
c2.setValues(brr2, 2);
cout << "c1 Values : " << c1 << endl;
cout << "c2 values : " << c2 << endl;

c3 = c1 + c2;

cout << "C3 is : " << c3 << endl;


cout << "\n\n\n";

}

