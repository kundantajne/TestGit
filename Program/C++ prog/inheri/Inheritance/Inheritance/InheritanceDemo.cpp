#include<iostream>
using namespace std;
#include<stdio.h>
class Employe
{
	int id;
	char name[20];
	double salary;

public:

	Employe() //Default constructor
	{
		printf("\n Default constructor of Employe call");
		//cout << constuctor of employe call;
		id = 100;
		strcpy(name, "Not Given");
		salary = 10000;
	}
	Employe(int i, char*nm, double s) //Parameterized Constructor
		////Pass the parameter for parameterised constructor
	{
		printf("\n parametrised constructor of Employe call");
		id = i;
		strcpy(name, nm);
		salary = s;

		
	}
	void setid(int a)
	{
		id = a;
	}
	void setname(char*nm)
	{
		strcpy(name, nm);
	}
	void setsalary(double c)
	{
		salary = c;
	}
	double getsalary()
	{
		return salary;

	}
	char* getName()
	{
		return name;
	}
	virtual void display()
	{
		printf("\n Id is : %d,\n Name is:%s,\n Salary is:%lf", this->id, this->name, this->salary);
	}
	virtual double calsal()
	{
		return this->salary;
	}
};
class SalesManager :public Employe //(:)Is a realtionship
{

	double Incentive;
	int Target;

public:

	SalesManager() //Default constructor
	{
		printf("\n Default Constructor of SM call");
		/*Incentive = 5000;
		Target = 20;*/
	}
	SalesManager(int i, char*nm, double s, double inc, int t)/*Defnation*/ : Employe(i, nm, s) //call without datatypr (Emp)This is know as Parameterized initialisation list
		// (:) to dfferentiate the defination and call ////Pass the parameter for parameterised constructor
	{
		printf("\n  parametrised OF SM constructor");


		Incentive = inc;
		Target = t;


	}

	void setIncentive(double a)
	{
		Incentive = a;
	}
	void setTarget(int u)
	{
		Target = u;
	}
	int getIncentive()
	{
		return Incentive;
	}
	void display()
	{
		Employe::display();
		printf("\n Incentive is:%lf,\n Target:%d", Incentive, Target);
		printf("\n");
	}
	double calsal()
	{
		return this->getsalary();
	}
};
class HR_Manager :public Employe
{

	double comission;

public:

	HR_Manager()//Default constructor
	{
		printf("\n Default Constructor of HR");
		comission = 5000;
	}
	HR_Manager(int i, char*nm, double s, double cm)/*Defnation*/ : Employe(i, nm, s) //Parameterized Constructor
		////Pass the parameter for parameterised constructor
	{
		printf("\n Parametried of HR Manager");

		comission = cm;


	}

	void setcomission(double cm)
	{
		comission = cm;
	}
	void display()
	{
		Employe::display();

		printf("\n Commision of HR Manager:%lf", comission);
		printf("\n");
	}
	double calsal()
	{
		return this->getsalary();
	}

};
class Admin :public Employe
{

	double Allowance;

public:

	Admin()//Default constructor
	{
		printf("\n Default Constructor of Admin");

		Allowance = 200;
	}
	Admin(int i, char*nm, double s, double al)/*Defnation*/ : Employe(i, nm, s) //Parameterized Constructor
		////Pass the parameter for parameterised constructor
	{
		printf("\n Parametried of Admin");

		Allowance = al;

	}

	void setAllowance(double al)
	{
		Allowance = al;
	}

	double getAllowance()
	{
		return Allowance;
	}
	void display()
	{
		Employe::display();
		printf("\n Allowance of Admin:%lf", Allowance);
		printf("\n");
	}
	/*double calsal()
	{
		return this->getsalary();
	}*/
	
};


/*void main()
{
SalesManager s1;
SalesManager s2(103, "name", 20000, 200, 30);
HR_Manager h1;
HR_Manager h2(11, "kundan", 30000, 3000);
Admin a1;
Admin a2(12, "IT Dept", 40000, 1000);
s1.display();
s2.display();
h1.display();
h2.display();
a1.display();
a2.display();

}*/

void AllempDetails(Employe *);
void main()
{
	/*
	Employe *ep;
	Employe e1(101, "kundan", 2000);
	ep = &e1;
	ep->display();
	printf("\ calculated salay is:%lf", ep->calsal());

	SalesManager *sa;
	SalesManager s2(103, "name", 20000, 200, 30);
	ep = &s2;
	ep->display();
	
	//cout << "\n";
	HR_Manager *hr;
	HR_Manager h2(11, "kundan", 30000, 30);
	ep = &h2;
	ep->display();

	Admin *ap;
	Admin a2(12, "IT Dept", 40000, 100);
	ep = &a2;
	ep->display();
	printf("admin calsal: %lf", ep->calsal());
*/
	
	SalesManager s1(100, "tushar", 30000, 300,30);
	AllempDetails(&s1);

	Admin a1(101, "Kundan",30000,300);
	AllempDetails(&a1);

}
void AllempDetails(Employe *ep)
{
	printf("\nName", ep->getName());
	if (strcmp("class SalesManager",typeid(*ep).name())==0)
	{
		SalesManager *sp = (SalesManager*)ep;
		printf("\nIncentive", sp->getIncentive());
	}

	
	if (strcmp("class Admin", typeid(*ep).name()) == 0)
	{
		Admin *ap = (Admin*)ep;
		printf("\nAllow", ap->getAllowance());
	}
	

}

void AllempDetails(Employe *ep)
{
	cout << "\n Name oF emp :" << ep->getName();

	SalesManager *sp = dynamic_cast<SalesManager*>(ep);
	if (sp!=NULL)
	{
		printf("\nIncentive", sp->getIncentive());
	}


	Admin *ap = dynamic_cast<Admin*>(ep);
	if (ap!=NULL)
	{
		printf("\nAllow", ap->getAllowance());
	}
}