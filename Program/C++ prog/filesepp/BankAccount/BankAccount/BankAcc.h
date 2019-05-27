#include<iostream>
using namespace std;
#include<string.h>

class BankAccount
{
	int Acc_no;
	char  name[20];
	double balance;
	 double intrestRate;

public:
	BankAccount(int , char * , double , double);
	void setAccNo(int );
	void setName(char * );
	void setBalance(double );
	void setIR(double );
	int getAccNo();
	char * getName();
	double getBalance();
	double getIR();
	void display();





};
