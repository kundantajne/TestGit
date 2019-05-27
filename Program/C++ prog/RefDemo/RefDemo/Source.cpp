#include<iostream>
using namespace std;
/*
//Simple Reference Variable Program:-
int main()
{
int a = 10;
int& r = a;
r = 30;
cout << a<<endl;
}*/
void myfun(int& r)
{
	r = 333;
}
void myfun(int&);
int main()
{
	int a = 10;
	cout <<"Before Using Ref Variable :-"<< a<<endl;
	cout << "\n";
	myfun(a);
	cout <<"After Using Ref variable :-"<< a<<endl;
	cout << "\n\n";
}