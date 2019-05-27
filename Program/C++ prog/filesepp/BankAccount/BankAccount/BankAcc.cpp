#include"BankAcc.h"
BankAccount:: BankAccount(int an, char * nm, double bl, double ir)
{
	cout << "Paramerised constructor called\n";

	Acc_no = an;
	strcpy(name, nm);
	balance = bl;
	intrestRate = ir;
}

void BankAccount::setAccNo(int an)
{
	Acc_no = an;
}

void BankAccount::setName(char * nm)
{
	strcpy(name, nm);
}

void BankAccount::setBalance(double bl)
{
	balance = bl;
}

void BankAccount::setIR(double ir)
{
	intrestRate = ir;
}

int BankAccount::getAccNo()
{
	return Acc_no;
}

char * BankAccount::getName()
{
	return name;
}

double BankAccount::getBalance()
{
	return balance;
}

double BankAccount::getIR()
{
	return intrestRate;
}

void BankAccount::display()
{
	cout << "Bank Account Info :\n" << "Account Number  Is: " << Acc_no << "\n Name Is :" << name << "\nBalance Is :" << balance << "\n Intrest Rate Is :" << intrestRate;
	cout << "\n\n\n";
}