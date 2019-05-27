#include"Emp.h"
class Admin :public Employe
{

	double Allowance;

public:
	Admin();
	Admin(int , char*, double , double );
	void setAllowance(double );
	double getAllowance();
	void display();
	double calsal();


	
};

