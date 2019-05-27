#include<iostream>
using namespace std;
#include<string.h>
#include<conio.h>


class Emp
{
	char Name[20];
	double Salary;
	int id;
	static int count;
public:


	void setName(char * nm)
	{
		strcpy(Name, nm);
	}
	char * getName(){
		return Name;
	}
	void setSalary(double sa)
	{
		Salary = sa;
	}
	double getSalary()
	{
		return Salary;
	}
	void setId(void)
	{
		count++;
	}
	int getId()
	{
		return count;
	}
	void display()
	{
		cout << "\nName  Is :" << getName() << "\nSalary Is :" << getSalary()<< "\n Id is :" <<getId()<<endl;
	}
	Emp(char * nm, double sa)
	{
		cout << "Constructor Called ";
		strcpy(Name, nm);
		Salary = sa;
		setId();


	}
};

int Emp::count;
int main()
{
	cout << "Object 1 Details :";
	Emp e1("Kundanx", 2000);
	e1.display();

	cout << "\n";
	cout << "Object 2 Details :";

	Emp e2("Tushar", 10000);
	e2.display();

	cout << "\n";
	cout << "Object 3 Details :";
	Emp e3("Akshay", 30000);																																																																																																																																																																																													
	e3.display();

	cout << "\n\n\n";
	//getch();
}