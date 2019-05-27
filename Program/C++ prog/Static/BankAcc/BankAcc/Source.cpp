#include<iostream>
using namespace std;
#include<string.h>

class BankAccount
{
	int Acc_no;
	char  name[20];
	double balance;
	static double intrestRate;

public:

	BankAccount(int an, char * nm, double bl)
	{
		cout << "Paramerised constructor called\n";

		Acc_no = an;
		strcpy(name, nm);
		balance = bl;
		
	}

	void setAccNo(int an)
	{
		Acc_no = an;
	}

	void setName(char * nm)
	{
		strcpy(name, nm);
	}

	void setBalance(double bl)
	{
		balance = bl;
	
	}

	static void setIR(double ir)
	{
		intrestRate = ir;
		//cout << "balance :" << balance;
	}

	int getAccNo()
	{
		return Acc_no;
	}

	char * getName()
	{
		return name;
	}

	double getBalance()
	{
		return balance;
	}

	double getIR()
	{
		return intrestRate;
	}

	void display()
	{
		cout << "Bank Account Info :\n" << "Account Number  Is: " << Acc_no << "\n Name Is :" << name << "\nBalance Is :" << balance << "\n Intrest Rate Is :" << intrestRate;
		cout << "\n\n\n";
	}





};

double BankAccount::intrestRate = 8.9;
int main()
{
	BankAccount b1(123456789, "Kundan", 200000);
	b1.display();

	cout << "\n";

	BankAccount b2(12345, "Tushar", 10000);
	b2.display();

	cout << "\n\n\n";

	//b1.setIR(7); Its not 
	//b1.display();

	BankAccount::setIR(6);
	b1.display();
	b2.display();


	cout << "\n\n\n";



	
}
