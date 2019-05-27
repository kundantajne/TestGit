#include"fb.h"
footballPlayer::footballPlayer(char *nm, int jn, char* cn, int mn, int gn) :Player(nm, jn, cn, mn)
{

	goal = gn;
}

void footballPlayer::setGoal(int gn)
{
	goal = gn;
}
int footballPlayer::getGoal()
{
	return goal;
}

void footballPlayer::display()
{
	cout << "\n\n";
	cout << "FootBall Info: ";
	cout << "\n";
	Player::display();
	cout << "Number Of Goal :" << goal << endl;
}

double footballPlayer::avg()
{
	return (goal / getmatchsNO());
}
