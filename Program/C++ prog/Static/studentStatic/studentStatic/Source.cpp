#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int roll;
	char name[20];
	double TotalMarks;
	static int count;

public:
	student()
	{
		roll = 0;
		strcpy(name, "not Given");
		TotalMarks = 0;
		setCount();
	}
	student(int r, char* nm, double tm)
	{
		roll = r;
		strcpy(name, nm);
		TotalMarks = tm;
		setCount();
	}

	void setCount(void)
	{
		count++;
	}

	static int getCount()
	{
		return count;
	}

	
	void setRoll(int r)
	{
		roll = r;
	}
	void setName(char* nm)
	{
		strcpy(name, nm);
	}
	void setMarks(double tm)
	{
		TotalMarks = tm;
	}
	int getRoll()
	{
		return roll;
	}

	char* getName()
	{
		return name;
	}

	double getTotalMarks()
	{
		return TotalMarks;
	}

	void display()
	{
		cout << "details Of Student :" << "\nRoll Number Is :" << getRoll() << "\nName Is :" << getName() << "\nTotal Marks Is :" << getTotalMarks()<<endl;
	}
	~student()
	{
		count--;
	}
};

int student::count;

int main()
{
	student s1(10, "Kundan", 70);
	student s2;
	cout << "Count Of Student is :" << student::getCount()<<endl;

	
}
