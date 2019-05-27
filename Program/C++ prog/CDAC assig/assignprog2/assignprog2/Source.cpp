#include<iostream>
using namespace std;
class Date
{
	int date;
	char month[20];
	int year;

public:
	Date()
	{
		cout << "Default Construtor\n";
		date = 0;
		strcpy(month, "Not Given");
		year = 0;
	}
	Date(int d, char* m, int y)
	{
		cout << "Parameterized Constructor\n";
		date = d;
		strcpy(month, m);
		year = y;
	}
	Date(const Date &d)
	{
		date = d.date;
		strcpy(month, d.month);
		year = d.year;
	}

	void setDate(int d)
	{
		date = d;
	}
	void setMonth(char* m)
	{
		strcpy(month, m);
	}
	void setYear(int y)
	{
		year = y;
	}

	int getDate()
	{
		return date;
	}
	char * getMonth()
	{
		return month;
	}

	int getYear()
	{
		return year;
	}
	void display()
	{
		cout << "Date Details are :" << "\n Date Is :" << getDate() << "\nMonth Is :" << getMonth() << "\nYear Is :" << getYear()<<endl;
	}
};

int main()
{
	Date d1;
	Date d2(12, "Aug", 1996);
	d1.display();
	d2.display();
	//cout<<d1.getDate();
	Date d4 = d2;
	d2.display();
	cout << "\n\n";
}