

//#pragma once
#include<string.h>
#include"player.h"
#include"fb.h"
#include"cricket.h"

int main()
{
	Player *p1;
	/*	Player p2("Kundan", 7, "India", 10);
	p1 = &p2;
	p1->display();
	cout << "Avg For Player" << p1->avg() << endl;*/

	footballPlayer f1("Tushar", 9, "UK", 9, 18);
	p1 = &f1;
	p1->display();
	cout << "Avg of Goal :" << p1->avg() << endl;

	cricketPlayer c1("Akshay", 5, "Brazil", 11, 15);
	p1 = &c1;
	p1->display();
	cout << "Avg For wicket :" << p1->avg() << endl;
}

