#include<iostream>
using namespace std;

class Player
{
	char name[20];
	int jerno;
	char country[20];
	int matchsNO;
public:
	


	Player(char* n, int j, char*co, int m)
	{
		cout << "Parameterised Constructor Called ";
		strcpy(this->name, n);
		this->jerno = j;
		strcpy(this->country, co);
		this->matchsNO = m;
	}
	void setname(char* n)
	{
		strcpy(this->name, n);

	}
	char* getname()
	{
		return this->name;

	}

	void setjerno(int j)
	{
		jerno = j;
	}
	int getjerno()
	{
		return this->jerno;
	}

	void setcountry(char* c)
	{
		strcpy(this->country, c);

	}
	char* getcountry()
	{
		return this->country;

	}
	void setmatchsNO(int m)
	{
		jerno = m;
	}
	int getmatchsNO()
	{
		return this->matchsNO;
	}
	virtual void display()
	{

		cout << "\n name=" << this->name << "\n jersy no=" << this->jerno << "\n country name=" << this->country << "\n no of matches=" << this->matchsNO;
	}
	virtual double avg()
	{
		return 0;
	}

};

class footballPlayer :public Player
{
	int goal;

public:
	footballPlayer(char *nm, int jn, char* cn, int mn, int gn) :Player(nm, jn, cn, mn)
	{
		
		goal = gn;
	}

	void setGoal(int gn)
	{
		goal = gn;
	}
	int getGoal()
	{
		return goal;
	}

	void display()
	{
		Player::display();
		cout << "Goal Number is :" << goal<<endl;
	}

	 double avg()
	{
		 return (goal / getmatchsNO());
	}

};

class cricketPlayer :public Player
{
	int wicket;

public:
	cricketPlayer(char *nm, int jn, char* cn, int mn, int wk) :Player(nm, jn, cn, mn)
	{
		wicket = wk;
	}

	void setWicket(int wk)
	{
		wicket = wk;
	}

	int getWicket()
	{
		return wicket;
	}

	void display()
	{
		Player::display();
		cout << "Wicket Number is : " << wicket << endl;

	}

	double avg()
	{
		return (wicket / getmatchsNO());
	}

};

int main()
{
	Player *p1;
	Player p2("Kundan", 7, "India", 10);
	p1 = &p2;
	p1->display();
	cout<<"Avg For Player"<<p1->avg()<<endl;

	footballPlayer f1("Tushar", 9, "UK", 9, 7);
	p1 = &f1;
	p1->display();
	cout << "Avg For Player" << p1->avg()<<endl;

	cricketPlayer c1("Akshay", 5, "Brazil", 11, 3);
	p1 = &c1;
	p1->display();
	cout << "Avg For Player" << p1->avg()<<endl;
	}

