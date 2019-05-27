#pragma once
#include<iostream>
using namespace std;

class Player
{
	char name[20];
	int jerno;
	char country[20];
	int matchsNO;
public:

	Player(char*, int, char*, int);
	void setname(char*);
	char* getname();
	void setjerno(int);
	int getjerno();
	void setcountry(char*);
	char* getcountry();
	void setmatchsNO(int);
	int getmatchsNO();
	virtual void display();
	virtual double avg()=0;


};