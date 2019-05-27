#include<iostream>
using namespace std;

class mystring
{
	char* Strarr;
	int length;

public:
	mystring()
	{
		Strarr = new char[];
	}

	mystring(char* a)
	{
		char arr[10];
		int i;
		strcpy(arr, a);
		this->length = strlen(arr);
		Strarr = new char[length + 1];
		for ( i = 0; i < this->length; i++)
		{
			this->Strarr[i] = arr[i];

		}
		this->Strarr[i] = '\0';
	}

	/*mystring(mystring &s)
	{
		int i;
		strcpy(arr, a);
		this->length = strlen(arr);
		Strarr = new char[length + 1];
		for (i = 0; i < this->length; i++)
		{
			this->Strarr[i] = arr[i];

		}
		this->Strarr[i] = '\0';
	}*/

	
	
	mystring operator+(mystring& s)
	{
		mystring temp;
		int i,j;
		temp.length = this->length + s.length;
		temp.Strarr = new char[temp.length + 1];
		for ( i = 0; i <this->length; i++)
		{
			temp.Strarr[i] = this->Strarr[i];
		}
		for (j = 0; i< temp.length;i++,j++)
		{
			temp.Strarr[i] = s.Strarr[j];
		}
		temp.Strarr[i] = '\0';
		return temp;
	}
	char& operator[](int index)
	{
		if (index>=length)
		{
			exit(0);
		}
		return this->Strarr[index];
	}
	
	~mystring()
	{
		delete(Strarr);
	}

	friend void operator<<(ostream&, mystring&);
	friend void operator>>(istream &, mystring);
};

void operator>>(istream & i, mystring s)
{
	int n,j;
	cout << "enter the no of character";
	cin >> n;
	s.length = n;
	cout << "enter the string : ";
	for ( j = 0; j <s.length-1; j++)
	{
		i >> s.Strarr[j];
	}
	s.Strarr[j] = '\0';
}

void operator<<(ostream& o, mystring& s)
{
	for (int i = 0; i <s.length; i++)
	{
		o << s.Strarr[i];

	}
}

int main()
{
	mystring s1("Kundan");
	mystring s2("Tajne");
	mystring s3;
	
	cout << s1;
	cout << s2;
	cout << "\n";
	s3 = s1 + s2;
	cout<<"Concatenated String is: "<<s3;

	mystring s4;
	s4 = "\ntushar";
	cout << s4;

	mystring s5="Akshay";
	cout << s5;

	mystring s6;
	cin >> s6;
	cout << s6;


	cout << "\n\n\n";
}