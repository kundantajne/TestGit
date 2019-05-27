#include"Emp.h"
Employe::Employe() //Default constructor
{
	printf("\n Default constructor of Employe call");
	//cout << constuctor of employe call;
	id = 100;
	strcpy(name, "Not Given");
	salary = 10000;
}
Employe::Employe(int i, char*nm, double s) //Parameterized Constructor
////Pass the parameter for parameterised constructor
{
	printf("\n parametrised constructor of Employe call");
	id = i;
	strcpy(name, nm);
	salary = s;


}
void Employe::setid(int a)
{
	id = a;
}
void Employe::setname(char*nm)
{
	strcpy(name, nm);
}
void Employe::setsalary(double c)
{
	salary = c;
}
int Employe::getId()
{
	return id;
}
double Employe::getsalary()
{
	return salary;

}
char* Employe::getName()
{
	return name;
}
/*
double Employe::calsal()
{
return this->salary;
}*/
void Employe::display()
{
	printf("\n Id is : %d,\n Name is:%s,\n Salary is:%lf", this->id, this->name, this->salary);
}
ostream & operator << (ostream &o, Employe &e)
{
	o << e.getId() << e.getName() << e.getsalary() << endl;
	return o;
}
istream& operator>>(istream& i, Employe &e)
{
	i >> e.id >> e.name >> e.salary;
	return i;
}
