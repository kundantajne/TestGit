#include<iostream>
using namespace std;
int main()
{
	 int a = 10;
	 int b;
	 int* const ptr = &a;
	*ptr = 20;
	 ptr = &b;

}