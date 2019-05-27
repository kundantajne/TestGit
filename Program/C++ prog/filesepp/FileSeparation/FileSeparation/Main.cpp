#pragma once
#include"Emp.h";
#include"Sm.h";
#include"Admin.h"
void main()
{
	Employe *ep;
	/*Employe e1(101, "kundan", 2000);
	ep = &e1;
	ep->display();*/

	
	SalesManager s1;
	SalesManager s2(103, "Tushar", 20000, 200, 30);
	ep = &s2;
	cin >> s1;
	cout << s1;
	ep->display();
	cout << "sal of Sm" << ep->calsal();

	
	Admin a2(12, "IT Dept", 40000, 100);
	Admin a1();
	//cin >> a2();

	ep = &a2;
	ep->display();
	cout << "s2 Details:";
	
	

}
