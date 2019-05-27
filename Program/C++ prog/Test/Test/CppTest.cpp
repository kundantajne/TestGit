#include <iostream>
#include <conio.h>
using namespace std;
class Toll
{
public:
	int no;
	int basic;

	Toll()
	{
		no = 0;
		basic = 0;
	}
	Toll(int a,int b)
	{
		no = a;
		basic = b;
	}
	void setNo(int a)
	{
		no = a;
	}
	void setBasic(int b)
	{
		basic = b;
	}
	int getNo()
	{
		return no;
	}
	int getBasic()
	{
		return basic;
	}
  virtual int calToll()
	{
		cout << "Toll For Vehicles";
		return 0;
	}
};
class twowheelers : public Toll
{

public:
	
	twowheelers(int a, int b) :Toll(a,b)
	{

	}
	int calToll()
	{
		

		return (getBasic() + (getNo() - 2) * 10);
	}
};
class threewheelers : public Toll
{
public:
	threewheelers(int a, int b) :Toll(a, b)
	{

	}
	
	int calToll()
	{
		return (getBasic() + (getNo() - 3) * 20);
	}
};
class fourwheelers : public Toll
{
public:
	fourwheelers(int a, int b) :Toll(a,b)
	{
		
	}
	int calToll()
	{
		return (getBasic() + (getNo() - 4) * 40);
	}
};
class heavyvehicles : public Toll
{
public:
	heavyvehicles(int a, int b) :Toll(a,b)
	{
		
	}
	int calToll()
	{
		return (getBasic() + (getNo() - 6) * 100);
	}
};
int main()
{
	Toll *t;

	int ch,no,basic;
	char ans;
	do
	{
		cout << "Toll System:\n";
		cout << "1:for Two Wheelers:\n";
		cout << "2:for Three Wheelers:\n";
		cout << "3:for four Wheelers:\n";
		cout << "4:for Heavy vehicles:\n";

		cout << "Enter Your Choice";
		cin >> ch;

	switch (ch)
	{
	case 1:
		{
			  cout << "Enter The No Person :";
			  cin >> no;
			  cout << "Enter The basic Toll :";
			  cin >> basic;
			  twowheelers b1(no,basic);
			  t = &b1;
			  if (no>2)
			  {
				  cout << "Two Wheelers Toll " << t->calToll() << "\n";
			  }
			  else
			  {
				  cout << "Toll for the Two Wheelers :"<<basic<<endl;
			  }
			  
		}
		
		

		break;

	case 2:
		{
			  cout << "Enter The No Person :";
			  cin >> no;
			  cout << "Enter The basic Toll :";
			  cin >> basic;
			  threewheelers t3(no,basic);
			  t = &t3;
			  if (no>3)
			  {
				  cout << "Two Wheelers Toll " << t->calToll() << "\n";
			  }
			  else
			  {
				  cout << "Toll for the Two Wheelers :" << basic << endl;
			  }
	
		}
		

		break;

	case 3:

		{
			  cout << "Enter The No Person :";
			  cin >> no;
			  cout << "Enter The basic Toll :";
			  cin >> basic;
			  fourwheelers f1(no,basic);
			  t = &f1;
			  if (no>4)
			  {
				  cout << "Two Wheelers Toll " << t->calToll() << "\n";
			  }
			  else
			  {
				  cout << "Toll for the Two Wheelers :" << basic << endl;
			  }

		}

		break;

	case 4:
		{
			  cout << "Enter The No Person :";
			  cin >> no;
			  cout << "Enter The basic Toll :";
			  cin >> basic;
			  heavyvehicles h1(no,basic);

			  if (no>6)
			  {
				  cout << "Two Wheelers Toll " << t->calToll() << "\n";
			  }
			  else
			  {
				  cout << "Toll for the Two Wheelers :" << basic << endl;
			  }

		}

	
		break;
	}
	cout << "Do You Want Two Continue:\n";
	cin >> ans;

	} while (ans=='y');
	
}
