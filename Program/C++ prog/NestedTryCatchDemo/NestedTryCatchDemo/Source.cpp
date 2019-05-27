#include <iostream>

using namespace std;

int main()
{
	// nested try-catch blocks

	try{
		try
		{
			throw 20;
		}
		catch (int e)
		{
			cout << "An exception occured. Exception Number: " << e << endl;
			throw 'e';
		}
	}
	catch (char c)
	{
		cout << "\nAn exception occured. Exception type: " << c;
	}
	cout << "\n\n\n";
}