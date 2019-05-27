#include<stdio.h>
#include<string.h>
class os
{
	char name[20];
	
	char type[20];

public:
	void setName(char* a)
	{
		strcpy(this->name, a);
	}

	void setType(char* b)
	{
		strcpy(this->type, b);
	}

	void display()
	{
		printf("Name Of OS is:%s\n", this->name);
		printf("Type Of Os is:%s\n", this->type);
	}

};

int main()
{
	os o1;
	o1.setName("Windows 10");
	o1.setType("windows");
	o1.display();
}