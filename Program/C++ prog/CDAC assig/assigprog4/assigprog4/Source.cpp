#include<iostream>
using namespace std;

class Point
{
	float x;
	float y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(float a, float b)
	{
		x = a;
		y = b;
	}
	void setX(float a)
	{
		x = a;
	}
	void setY(float b)
	{
		y = b;
	}
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;

	}
	void display()
	{
		cout << "Point Details are : " << "\nValue of X point is :" << getX() << "\nValue Of point y is :" << getY()<<endl;
	}
};

int main()
{
	Point p1;
	Point p2(2.23, 5.8);
	cout << "Default Constructor \n";
	p1.display();
	cout << "Parameterized Constructor \n";
	p2.display();
	cout << "\n\n";
}