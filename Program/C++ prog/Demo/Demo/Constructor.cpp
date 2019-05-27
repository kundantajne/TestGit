#include<stdio.h>
#include<string.h>

class constructor
{
	int real;
	int imag;

public:
	/* constructor()
	{
		this->real = 0;
		this->imag = 0;

	}*/
	 constructor(int a, int b)
	 {
		 real = a;
			 imag = b;
	 }

	void display()
	{
		printf("real number is :%d imag number is :%di\n", this->real, this->imag);
		printf("*************************************************\n");
	}
};

int main()
{
	//constructor c1;

	//c1.display();

	constructor c2(10, 20);
	c2.display();
}