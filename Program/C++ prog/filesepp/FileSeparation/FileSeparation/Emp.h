#pragma once
using namespace std;
#include<stdio.h>
#include<iostream>
#include<string.h>
class Employe
{
	int id;
	char name[20];
	double salary;

public:
	Employe();
	Employe(int, char*, double);
	void setid(int);
	void setname(char*);
	void setsalary(double);
	int getId();
	double getsalary();
	char* getName();
	virtual void display();
	virtual double calsal()=0;
	friend ostream & operator << (ostream &, Employe &);
	friend istream& operator>>(istream&, Employe &);
};
