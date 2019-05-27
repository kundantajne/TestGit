#include"Emp.h"
class SalesManager :public Employe //(:)Is a realtionship
{

	double Incentive;
	int Target;

public:
	SalesManager();
	SalesManager(int, char*, double, double, int);
	void setIncentive(double);
	void setTarget(int);
	int getIncentive();
	int getTarget();
	void display();
	double calsal();



};