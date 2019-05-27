#include<stdio.h>
#include<string.h>

class Cal
{
public:

	/*Addtion*/
	int add(int a, int b)
	{
		return a + b;
	}
	double add(int a, double b)
	{
		return a + b;
	}

	double add(double a, int b)
	{
		return a + b;
	}

	double add(double a, double b)
	{
		return a + b;
	}


	/*Subtraction */

	int Sub(int a, int b)
	{
		return a - b;
	}
	double Sub(int a, double b)
	{
		return a - b;
	}

	double Sub(double a, int b)
	{
		return a - b;
	}

	double Sub(double a, double b)
	{
		return a - b;
	}

	/*Multiplication */


	int Mul(int a, int b)
	{
		return a * b;
	}
	double Mul(int a, double b)
	{
		return a * b;
	}

	double Mul(double a, int b)
	{
		return a * b;
	}

	double Mul(double a, double b)
	{
		return a * b;
	}

	/*Division*/

	int Div(int a, int b)
	{
		return a / b;
	}
	double Div(int a, double b)
	{
		return a / b;
	}

	double Div(double a, int b)
	{
		return a / b;
	}

	double Div(double a, double b)
	{
		return a / b;
	}




	
};

int main()
{
	Cal c1;
	printf("Addtion of Two Number are: \n");
	printf("%d\n", c1.add(10, 10));
	printf("%f\n", c1.add(10, 10.52));
	printf("%f\n",c1.add(10.53,10));
	printf("%f\n", c1.add(10.50, 10.52));

	Cal c2;

	printf("Subtraction of Two Number are: \n");
	printf("%d\n", c2.Sub(10, 10));
	printf("%f\n", c2.Sub(12, 10.00));
	printf("%f\n", c2.Sub(10.53, 10));
	printf("%f\n", c2.Sub(10.52, 10.50));

	Cal c3;

	printf("Multiplication of Two Number are: \n");
	printf("%d\n", c3.Mul(10, 10));
	printf("%f\n", c3.Mul(12, 10.00));
	printf("%f\n", c3.Mul(10.53, 10));
	printf("%f\n", c3.Mul(10.52, 10.50));

	Cal c4;

	printf("Division of Two Number are: \n");
	printf("%d\n", c4.Div(10, 10));
	printf("%f\n", c4.Div(12, 10.00));
	printf("%f\n", c4.Div(10.53, 10));
	printf("%f\n", c4.Div(10.52, 10.50));



	
}