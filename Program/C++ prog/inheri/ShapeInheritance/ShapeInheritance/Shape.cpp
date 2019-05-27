#include<iostream>
using namespace std;

class Shape
{
public:
	int width;
	int height;
	int base;
	int radius;

	Shape()
	{
		width = 0;
		height = 0;
		base = 0;
		radius = 0;
	}
	void setWidth(int w)
	{
		width = w;
	}

	void setHeight(int h)
	{
		height = h;
	}
	void setBase(int b)
	{
		base = b;
	}
	int getWidth()
	{
		return width;
	}

	int getHeight()
	{
		return height;
	}
	int getBase()
	{
		return base;
	}

	virtual int area()
	{
		cout << "This Is Shape Class Area ";
		return 0;
	}


};

class Rectangle :public Shape
{
public:
	Rectangle(int w, int h) 
	{
		width = w;
		height = h;
	}
	int area()
	{
		return (width*height);
	}
};
class Triangle :public Shape
{
public:
	
	Triangle(int b, int h) 
	{
		base = b;
		height = h;
	}

	int area()
	{
		return (0.5*base*height);
	}
};
class circle :public Shape
{
	circle()
	{

	}
};


int main()
{
	Shape *s1;
	Rectangle r1(10, 10);
	s1 = &r1;
	cout<<"Area Of Rectangle is :"<<s1->area()<<endl;

	Triangle t1(20, 10);
	
	s1 = &t1;
	cout << "Area Of Triangle is :" << s1->area()<<endl;



}