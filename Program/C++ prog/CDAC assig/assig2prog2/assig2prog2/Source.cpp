#include<iostream>
#include<string.h>
using namespace std;

class Person
{
	char name[20];
	int age;
	char * city;
	static int count;

public:
	Person()
	{
		strcpy(name, "Not Given");
		age = 0;
		strcpy(city, "Not Given");
		count++;

	}
	Person(char* nm, int a, char* c)
	{
		strcpy(name, nm);
		age = a;
		strcpy(city, c);
		count++;

	}
	Person(const Person &p)
	{
		strcpy(name, p.name);
		age = p.age;
		strcpy(city, p.city);
		count ++ ;
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
	static int getDisplayCount()
	{
		return count;
	}
	void display()
	{
		cout << "Person Details are :- " << "\nName : " << getName() << "\nAge : " << getAge() << "\nCity : " << getCity();
	}




};
int Person::count;

int main()
{
	Person p1;
	Person p2("Kundan", 22, "Wani");
	p1.display();
	cout << "\n";
	p2.display();
	cout << "count" << Person::getDisplayCount();
	cout << "\n\n\n";
}