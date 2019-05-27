#include"BankAcc.h"
int main()
{
	BankAccount *b1;
	BankAccount b2(123456789, "Kundan", 20000, 200);
	b1 = &b2;
	b1->display();

}