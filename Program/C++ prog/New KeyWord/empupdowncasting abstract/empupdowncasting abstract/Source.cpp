#include<stdio.h>
#include<string.h>
using namespace std;
#include<iostream>
#include<typeinfo>

class Employee
{
	int id;
	char name[20];
	double sal;

public:
	friend ostream & operator << (ostream &, Employee &);
	friend istream& operator>>(istream&, Employee &);
	Employee()
	{
		printf("Default Employee Constructor\n");
		this->id = 100;
		strcpy(name, "not given");
		sal = 10000;
	}

	Employee(int i, char*  nm, double s)
	{
		//printf("Parameterised Employee Constructor\n");
		id = i;
		strcpy(name, nm);
		sal = s;
	}

	void setId(int i)
	{
		this->id = i;
	}

	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}

	void setSal(double s)
	{
		this->sal = s;
	}

	int getId()
	{
		return this->id;
	}

	char* getName()
	{
		return this->name;
	}

	double getSal()
	{
		return this->sal;
	}

	void virtual display()
	{
		printf("ID: %d\tName: %s\tSalary: %0.2lf\n", this->getId(), this->getName(), this->getSal());
	}

	virtual double calSal() = 0;

};

class SalesManager : public Employee
{
	double incentive;
	int target;

public:

	SalesManager()
	{
		//printf("Default Salesmanager Constructor Called\n");
		incentive = 0;
		target = 0;
	}

	SalesManager(int id, char* nm, double s, int i, int t) :Employee(id, nm, s)
	{
		//printf("Parameterised Salesmanager Constructor\n");
		this->incentive = i;
		this->target = t;
	}

	void setIcentive(double i)
	{
		this->incentive = i;
	}

	double getIncentive()
	{
		return this->incentive;
	}

	void setTarget(int t)
	{
		this->target = t;
	}

	int getTarget()
	{
		return this->target;
	}

	void display()
	{
		Employee::display();
		printf("Incentive: %0.2lf\t Target: %d\n", this->getIncentive(), this->getTarget());
	}

	double calSal()
	{
		return this->getSal() + incentive;
	}

};

class HR :public Employee
{
	double commission;

public:

	HR()
	{
		//printf("Default HR Constructor Called\n");
		commission = 0;
	}

	HR(int id, char* nm, double s, double c) :Employee(id, nm, s)
	{
		//printf("Parameterised HR Constructor Called\n");
		commission = c;
	}

	void setComm(double c)
	{
		this->commission = c;
	}

	double getComm()
	{
		return this->commission;
	}

	void display()
	{
		Employee::display();
		printf("Commission: Rs. %0.2lf\n", this->commission);
	}

	double calSal()
	{
		return this->getSal() + commission;
	}


};

class Admin :public Employee
{
	double allowance;

public:

	Admin()
	{
		//printf("Default Admin Constructor Called\n");
		allowance = 0;
	}

	Admin(int id, char* nm, double s, double a) :Employee(id, nm, s)
	{
		//printf("Parameterised Admin Constructor Called\n");
		allowance = a;
	}

	void setAllowance(double a)
	{
		this->allowance = a;
	}

	double getAllowance()
	{
		return this->allowance;
	}

	void display()
	{
		Employee::display();
		printf("Allowance: %0.2lf\n", this->getAllowance());
	}

	double calSal()
	{
		return this->getSal() + allowance;
	}

};

//

ostream & operator << (ostream &o, Employee &e)
{
	o << e.getId() << e.getName() << e.getSal() << endl;
	return o;
}
istream& operator>>(istream& i, Employee &e)
{
	i >> e.id >> e.name >> e.sal;
	return i;
}
void allem(Employee * ep);
int main()
{
	Employee* emp[3];
	/*HR* h=new HR(1,"sham",12000,1200);
	emp[0]=h;
	cout<<"\nHR details\n";
	emp[0]->display();
	Admin* ad=new Admin(2,"raj",20000,120);
	emp[1]=ad;
	cout<<"\nadmin details\n";
	emp[1]->display();
	SalesManager* s=new SalesManager(3,"priti",23000,200,210);
	emp[2]=s;
	cout<<"\nsalesmaneger details\n";	
	emp[2]->display();*/
	
	emp[0] = new SalesManager(1, "kundan", 12000, 1200, 200);
	allem(emp[0]);

	//emp[0]->display();
	emp[1] = new Admin(1, "tushar", 12000, 1200);
	allem(emp[1]);
	emp[2] = new HR(2, "akshay", 20000, 1500);
	allem(emp[2]);
	
}

void allem(Employee * ep)//downcasting
{
	/*cout << "\n" << ep->getName();

	printf("%lf",ep->calSal());

	cout << "\n" << typeid(*ep).name();
	if (strcmp("SalesManager", typeid(*ep).name()) == 0)
	{
		SalesManager* sp = (SalesManager*)ep;
		cout << "ince=" << sp->getIncentive();
	}
	if (strcmp("Admin", typeid(*ep).name()) == 0)
	{
		Admin* ap = (Admin*)ep;
		cout << "alll=" << ap->getAllowance();
	}*/

	//cout << ep->getname();
	//cout << ep->calsal();

	cout << "\nname of emplyoee is " << ep->getName();
	cout << "\n type of a is: " << typeid(*ep).name();//RTTI
	SalesManager *h1 = dynamic_cast<SalesManager*>(ep);
	if (h1 != NULL)
	{

		cout << "\n Incentive is::" << h1->getIncentive();

	}
	Admin* h = dynamic_cast<Admin*>(ep);
	if (h != NULL)
	{

		cout << "\nallownce is::" << h->getAllowance()<<endl;
	
	}
	HR * hr = dynamic_cast<HR*>(ep);
	if (hr!=NULL)
	{
		cout << "\n Commision is :" << hr->getComm() << endl;

		cout << "\n\n\n";
	}

}


