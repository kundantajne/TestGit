#include"player.h"
Player::Player(char* n, int j, char*co, int m)
{
	cout << "Parameterised Constructor Called "<<endl;

	strcpy(this->name, n);
	this->jerno = j;
	strcpy(this->country, co);
	this->matchsNO = m;
}
void Player::setname(char* n)
{
	strcpy(this->name, n);

}
char* Player::getname()
{
	return this->name;

}

void Player::setjerno(int j)
{
	jerno = j;
}
int Player::getjerno()
{
	return this->jerno;
}

void Player::setcountry(char* c)
{
	strcpy(this->country, c);

}
char* Player::getcountry()
{
	return this->country;

}
void Player::setmatchsNO(int m)
{
	jerno = m;
}
int Player::getmatchsNO()
{
	return this->matchsNO;
}
void Player::display()
{

	cout << "\n name=" << this->name << "\n jersy no=" << this->jerno << "\n country name=" << this->country << "\n no of matches=" << this->matchsNO;
}
/*double Player::avg()
{
	return 0;
	}*/