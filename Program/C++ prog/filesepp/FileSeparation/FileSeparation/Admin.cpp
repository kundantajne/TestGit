#include"Admin.h"
Admin::Admin()//Default constructor
{
	printf("\n Default Constructor of Admin");

	Allowance = 200;
}
Admin::Admin(int i, char*nm, double s, double al)/*Defnation*/ : Employe(i, nm, s) //Parameterized Constructor
////Pass the parameter for parameterised constructor
{
	printf("\n Parametried of Admin");

	Allowance = al;

}

void Admin::setAllowance(double al)
{
	Allowance = al;
}

double Admin::getAllowance()
{
	return Allowance;
}
void Admin::display()
{
	Employe::display();
	printf("\n Allowance of Admin:%lf", Allowance);
	printf("\n");
}
double Admin:: calsal()
{
return this->getsalary();
}

