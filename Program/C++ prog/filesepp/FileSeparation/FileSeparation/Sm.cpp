#include"Sm.h"
SalesManager::SalesManager() //Default constructor
{
	printf("\n Default Constructor of SM call");
	/*Incentive = 5000;
	Target = 20;*/
}
SalesManager::SalesManager(int i, char*nm, double s, double inc, int t)/*Defnation*/ : Employe(i, nm, s) //call without datatypr (Emp)This is know as Parameterized initialisation list
// (:) to dfferentiate the defination and call ////Pass the parameter for parameterised constructor
{
	printf("\n  parametrised OF SM constructor");


	Incentive = inc;
	Target = t;


}

void SalesManager::setIncentive(double a)
{
	Incentive = a;
}
void SalesManager::setTarget(int u)
{
	Target = u;
}
int SalesManager::getIncentive()
{
	return Incentive;
}
int SalesManager::getTarget()
{
	return Target;
}

void SalesManager::display()
{
	Employe::display();
	printf("\n Incentive is:%lf,\n Target:%d", Incentive, Target);
	printf("\n");
}
double SalesManager::calsal()
{
	return this->getsalary()+getIncentive();
}
