#include<stdio.h>
#include<string.h>

class accessories
{
	char type[20];
	char name[20];
	float price;

public:

	void setDetails(char *x, char *y, float z)
	{
		strcpy(this->type, x);
		strcpy(this->name, y);
		this->price = z;
	}

	void display()
	{

		printf("Accessories Type:%s \n", this->type);
		printf("Name Of Accessories :%s \n", this->name);
		printf("Price Of Accessories:%f \n", this->price);
	}

};

int main()
{
	accessories a1;
	a1.setDetails("Electronic", "Laptop", 50000);
	a1.display();
}