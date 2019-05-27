
#include"player.h"
class cricketPlayer :public Player
{
	int wicket;

public:
	cricketPlayer(char *, int, char*, int, int);
	void setWicket(int);
	int getWicket();
	void display();
	double avg();

};