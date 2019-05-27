#include<stdio.h>

#include<iostream>

using namespace std;



class complex

{

	int real;

	int imaginary;



public:

	void set_real(int a)

	{

		real = a;



	}



	void set_imaginary(int b)

	{

		imaginary = b;



	}



	int get_real()

	{

		return real;



	}



	int get_imaginary()

	{



		return imaginary;

	}



	complex()

	{

		cout << "\n Default constructore is called";

		real = 0;

		imaginary = 0;

	}

	complex(int r, int i)

	{

		cout << "\n parameterised constructor is called";



		real = r;

		imaginary = i;

	}

	complex(complex & v)   //copy constructor with reference variable

	{

		cout << "\n copy  constructor is called";



		this->real = v.real;

		this->imaginary = v.imaginary;

	}

	void display()

	{

		printf("\n %d+%d i", real, imaginary);



	}





};// class complex ends here....



//void myfun(complex);



int main()

{

	complex c1; //for c1 default constructor is get called



	complex c2(c1);//her a copy constructor is get called







	cout << "\n\n\n\n";

}

/*

void myfun(complex temp)

{

cout << "\n In function myfun";

}*/