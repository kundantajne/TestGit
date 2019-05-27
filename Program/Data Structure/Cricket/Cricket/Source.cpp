#include<iostream>
using namespace std;

class Player
{
	int jerNo;
	char Name[50];

public:
	Player()
	{
		jerNo = 0;
		strcpy(Name,"Not Given");
	}
	Player(int j, char* name)
	{
		jerNo = j;
		strcpy(this->Name, name);
	}

	virtual void Display()
	{
		cout << "Jersy no : " << jerNo <<endl<< "Name is : " << Name << endl;
	}

};
class Batsman:virtual public Player
{
protected:
	int runs;
public:
	Batsman(int r,int j,char* name) :Player(j,name)
	{
		runs = r;
	}1

	void setRun(int r)
	{
		runs = r;
	}
	int getRuns()
	{
		return runs;
	}
	virtual void Display()
	{
		Player::Display();
		cout << "Runs: " << getRuns()<<endl;
	}
};
class Bowler:virtual public Player
{
protected:
	int wickets;
public:
	Bowler(int w,int j, char* name) :Player(j, name)
	{
		wickets = w;
	}

	void setWickets(int w)
	{
		wickets = w;
	}
	int getWickets()
	{
		return wickets;
	}
	virtual void Display()
	{
		Player::Display();
		cout << "Wickets : "<<getWickets()<<endl;
	}
};

class Allrounder :public Batsman, public Bowler
{
public:
	Allrounder(int r, int w, int j, char* name) :Batsman(r,j,name), Bowler(w,j,name), Player(j, name)
	{
		

	}
	void Display()
	{
		Batsman::Display();
		Bowler::Display();
		//cout << "Runs :" << getRuns() <<" "<< "wickets" << getWickets()<<endl<<"j no";
	}

};

int main()
{

	Allrounder a1(10, 5, 10, "Kundan");
	Player * p1;
	//Batsman * b1;
	//Bowler * bw;
	//a1.Display();
	//b1 = &a1;
	//bw = &a1;
	//b1->Display();
	p1 = &a1;
	p1->Display();


	cout << "\n\n\n";
}