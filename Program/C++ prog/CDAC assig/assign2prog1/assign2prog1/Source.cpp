#include<iostream>
using namespace std;

class Swap
{

public:
	void SwapWithValue(int x, int y)
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
	void SwapWithAddress(int *x, int *y)
	{
		int temp;
		temp = *x;
		*x = *y;
		*y = temp;
	}
	void SwapWithRefer(int &x, int &y)
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
};

int main()
{
	int ch;
	char ans;
	int a = 1, b = 2;
	Swap s1;

	do
	{
		cout << "1: For Pass by Value\n";
		cout << "2: For Pass by Address\n";
		cout << "3: For Pass by Ref\n";
		cout << "Enter Your Choice\n";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "Pass By Value :\n";
			cout << "Before swapping" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			s1.SwapWithValue(a, b);
			cout << "\nAfter swapping" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			break;
		case 2:
			cout << "Pass By Address :\n";
			cout << "Before swapping" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			s1.SwapWithAddress(&a, &b);
			cout << "\nAfter swapping" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			break;

		case 3:
			cout << "Pass By Ref :\n";
			cout << "Before swapping" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			s1.SwapWithRefer(a, b);
			cout << "\nAfter swapping" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			break;

		}
		cout << "Do you Want to continue :";
		cin >> ans;
	} while (ans == 'y');

}
