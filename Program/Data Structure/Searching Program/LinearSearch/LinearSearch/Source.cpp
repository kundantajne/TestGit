#include<iostream>
using namespace std;
int main()
{
	int i, search, n,arr[10];
	int found = 0;
	cout << "Linear Search : " << endl;
	cout << "Enter the Number Of element : ";
	cin >> n;

	cout << "Enter The Element : ";
	for (i = 0; i < n; i++)
	{
		cin>> arr[i];

	}

	cout << "Enter The Element you want to Search :"<<endl;
	cin >> search;
	for ( i = 0; i < n; i++)
	{
		if (arr[i]==search)
		{
			found = 1;
			cout << search  << "Found At Location " << i<<endl;
			break;
		}
	}
	if (!found)
	{
		cout << "Element not Found !!!!"<<endl;
	}

}