#include"cricket.h"
cricketPlayer::cricketPlayer(char *nm, int jn, char* cn, int mn, int wk) :Player(nm, jn, cn, mn)
{
	wicket = wk;
}

void cricketPlayer::setWicket(int wk)
{
	wicket = wk;
}

int cricketPlayer::getWicket()
{
	return wicket;
}

void cricketPlayer::display()
{
	cout << "\n\n";
	cout << "Cricket Info: "<<endl;
	cout << "\n";
	Player::display();
	cout << "Wicket Number is : " << wicket << endl;

}

double cricketPlayer::avg()
{
	return (wicket / getmatchsNO());
}