#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	
	int size, arr[50], i, j, temp,first=0;
	cout << "Enter Array Size : ";
	cin >> size;
	cout << "Enter Array Elements : ";
	for (i = 0; i<size; i++)
	{
		cin >> arr[i];
	}
	cout << "Sorting array using selection sort...\n";
	for (i = 0; i<size; i++)
	{
		for (j = i + 1; j<size; j++)
		{
			if (arr[i]>arr[j])
			{
				first = j;
			}
			temp = arr[first];
			arr[first] = arr[i];
			arr[i] = temp;
		}
	}
	cout << "Now the Array after sorting is :\n";
	for (i = 0; i<size; i++)
	{
		cout << arr[i] << " ";
	}

}