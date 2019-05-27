#include<iostream>
using namespace std;
#include <string.h>

	class Emp
	{
		int id;
		char name[20];
		float salary;

	public:
		Emp() //Default constructor
		{
			printf("\n Default constructor of Employe call");
			//cout << constuctor of employe call;
			id = 100;
			strcpy(name, "Not Given");
			salary = 10000;
		}
		Emp(int i, char*nm, double s) //Parameterized Constructor
			////Pass the parameter for parameterised constructor
		{
			printf("\n parametrised constructor of Employe call");
			id = i;
			strcpy(name, nm);
			salary = s;


		}
		void setId(int a)
		{
			this->id = a;
		}
		void setName(char *nm)
		{
			strcpy(this->name, nm);
		}

		void setSal(float b)
		{
			this->salary = b;
		}

		int getId()
		{
			return this->id;
		}
		char *getName()
		{
			return this->name;
		}
		float getSal()
		{
			return this->salary;
		}
		void display()
		{
			printf("Id is:%d Name is:%s Sal is :%ld", this->id, this->name, this->getSal());
		}
		friend ostream & operator << (ostream &, Emp &);
		friend istream& operator>>(istream&, Emp &);
	};
	ostream & operator << (ostream &o, Emp &e)
	{
		o << e.getId() << e.getName() << e.getSal() << endl;
		return o;
	}
	istream& operator>>(istream& i, Emp &e)
	{
		i >> e.id >> e.name >> e.salary;
		return i;
	}

	int main()
	{
		Emp e1;
		cout << e1;
		cin >> e1;
		cout << e1;
		Emp e2(10, "tushar", 3000);
		cout << e2;


	}
