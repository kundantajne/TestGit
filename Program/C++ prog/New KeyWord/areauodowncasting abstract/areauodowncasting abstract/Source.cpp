using namespace std;
#include<iostream>
class shape
{
	double ar;

public:
	shape()
	{
		this->ar = 00;
	}


	virtual void display()
	{
		cout << "\n area" << this->ar;
	}
	virtual double area()
	{
		return 0;
	}


};//shape end
class circle :public shape
{
	int radius;
public:
	circle() :shape()
	{
		this->radius = 0;

	}
	circle(int r)
	{
		this->radius = r;

	}

	void setradius(int r)
	{
		this->radius = r;
	}
	int getradius()
	{
		return this->radius;
	}

	void display()
	{
		shape::display();
		cout << "\n radius=" << radius;
	}

	double area()
	{
		double i = 3.14* this->radius *this->radius;
		return i;
	}
};

class rectangle :public shape
{
	float length;
	float breath;
public:
	rectangle() :shape()
	{
		this->length = 0;
		this->breath = 0;

	}
	rectangle(float l, float b)
	{
		this->length = l;
		this->breath = b;

	}

	void setlength(float l)
	{
		this->length = l;
	}
	float getlength()
	{
		return this->length;
	}
	void setbreath(float l)
	{
		this->breath = l;
	}
	float getbreath()
	{
		return this->breath;
	}

	void display()
	{
		shape::display();
		cout << "\n length=" << this->length << "\n breath=" << this->breath;
	}

	double area()
	{
		double a = this->length*this->breath;
		return a;
	}
};

void allshapedetails(shape *sp)
{

	//cout << sp->area();

	//cout << "\narea of circle is " << sp->getarea();
	cout << "\n type of a is: " << typeid(*sp).name();//RTTI
	circle *cp = dynamic_cast<circle*>(sp);
	if (cp != NULL)
	{

		cout << "\n" << "radius of circle\n\n" << cp->getradius();
		cout << "\n" << sp->area();


	}
	rectangle* re = dynamic_cast<rectangle*>(sp);
	if (re != NULL)
	{

		cout << "\nlength is::" << re->getlength();
		cout << "\nBreadth is::" << re->getbreath();
		cout << "\n Area :"<<re->area();
		cout << "\n\n\n";
	}

}

void main()
{
	shape* sp[2];

	sp[0]=new circle(5);
	allshapedetails(sp[0]);



	sp[1]=new rectangle(3, 4);
	allshapedetails(sp[1]);

	/*circle c1(5);
	allshapedetails(&c1);



	rectangle r1(3, 4);
	allshapedetails(&r1);*/

}