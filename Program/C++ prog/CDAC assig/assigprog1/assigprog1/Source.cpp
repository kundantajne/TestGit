#include<iostream>
#include<string.h>
using namespace std;

class Person
{
	char name[20];
	int age;
	char * city;

public:
	Person()
	{
		strcpy(name, "Not Given");
		age = 0;
		strcpy(city, "Not Given");

	}
	Person(char* nm, int a, char* c)
	{
		strcpy(name, nm);
		age = a;
		strcpy(city, c);

	}
	void setName(char* nm)
	{
		strcpy(name, nm);
	}
	void setAge(int a)
	{
		age = a;
	}

	void setCity(char * c)
	{
		strcpy(city, c);
	}
	char * getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}

	char * getCity()
	{
		return city;
	}
	void display()
	{
		cout << "Person Details are :- " << "\nName : " << getName() << "\nAge : " << getAge() << "\nCity : " <<getCity();
	}




};

int main()
{
	Person p1;
	Person p2("Kundan", 22, "Wani");
	p1.display();
	cout << "\n";
	p2.display();
	cout << "\n\n\n";
}