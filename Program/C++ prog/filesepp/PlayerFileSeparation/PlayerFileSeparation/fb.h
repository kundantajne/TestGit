#include"player.h"
class footballPlayer :public Player
{
	int goal;

public:
	footballPlayer(char *, int, char*, int, int);
	void setGoal(int);
	int getGoal();
	void display();
	double avg();
};
