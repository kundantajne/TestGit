#include<iostream>
#include<string.h>
using namespace std;
class emp
{
	int id;
	char name[20];
	double salary;
	emp* next;
public:
	emp(int id, char* name, double salary)
	{
		this->id = id;
		strcpy(this->name, name);
		this->salary = salary;
	}
	void setid(int id)
	{
		this->id = id;
	}
	void setname(char* name)
	{
		strcpy(this->name, name);
	}
	void setsal(double salary)
	{
		this->salary = salary;
	}
	int getid()
	{
		return this->id;
	}
	char* getname()
	{
		return this->name;
	}
	double getsal()
	{
		return this->salary;
	}
	void setnext(emp* next)
	{
		this->next = next;
	}
	emp* getnext()
	{
		return this->next;
	}
};

class sll
{
	emp* start;
public:
	sll()
	{
		this->start = NULL;
	}
	void insert(int id, char* name, double salary)
	{
		emp* nn = new emp(id, name, salary);
		if (nn == NULL)
		{
			cout << "memory is full" << endl;
		}
		else
		{
			if (start == NULL)
			{
				start = nn;
			}
			else
			{
				emp* ep = start;
				while (ep->getnext() != NULL)
				{
					ep = ep->getnext();
				}
				ep->setnext(nn);
			}
		}
	}
	friend ostream& operator<<(ostream& o, sll s);
};
ostream& operator<<(ostream& o, sll s)
{
	if (s.start == NULL)
	{
		o << "empty";
	}
	else
	{
		emp* ep = s.start;
		while (ep != NULL)
		{
			o << "Emp Data" << endl;
			o << "ID=" << ep->getid() << endl;
			o << "NAME=" << ep->getname() << endl;
			o << "SALARY=" << ep->getsal() << endl;
			o << endl;
			ep = ep->getnext();
		}
	}
	
	return o;

}
int main()
{
	sll s1;
	s1.insert(1, "emp1", 100);
	s1.insert(2, "emp2", 200);
	s1.insert(3, "emp3", 300);
	cout << "inserted element" << endl;
	cout << s1;


}
