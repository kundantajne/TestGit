#include<stdio.h>
#include<string.h>


class Clibrary
{
	char C_Name[20];
	char S_Name[20];
	int S_Id;

public:
	void setDetails(char * cn, char *sn, int x)
	{
		strcpy(this->C_Name, cn);
		strcpy(this->S_Name, sn);
		this->S_Id = x;

	}

	void display()
	{
		printf("College Name:%s \n", this->C_Name);
		printf("Student Name:%s \n", this->S_Name);
		printf("Student Id:%d \n", this->S_Id);
	}
};

int main()
{
	Clibrary c1;
	c1.setDetails("JSPM", "Kundan", 21);
	c1.display();

}