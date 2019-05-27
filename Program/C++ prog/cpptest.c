#include <iostream>
#include <conio.h>
using namespace std;
class Base
{
  public:
    int no;
    int basic;
};
class twowheelers : public Base
{

  public:
    twowheelers()
    {
        no = 3;
        basic = 20;
    }
    virtual int twoWheel()
    {
        int toll;

        toll = basic + (no - 2) * 10;

        return toll;
    }
};
class threewheelers : public Base
{
  public:
    threewheelers()
    {
        no = 4;
        basic = 30;
    }
    int threeWheel()
    {
        int toll;

        toll = basic + (no - 3) * 20;

        return toll;
    }
};
class fourwheelers : public Base
{
  public:
    fourwheelers()
    {
        no = 5;
        basic = 40;
    }
    int fourWheel()
    {
        int toll;

        toll = basic + (no - 4) * 40;

        return toll;
    }
};
class heavyvehicles : public Base
{
  public:
    heavyvehicles()
    {
        no = 7;
        basic = 60;
    }
    int heavyVehi()
    {
        int toll;

        toll = basic + (no - 6) * 100;

        return toll;
    }
};
int main()
{
    int ch;
    cout << "Toll System:\n";
    cout << "1:for Two Wheelers:\n";
    cout << "2:for Three Wheelers:\n";
    cout << "3:for four Wheelers:\n";
    cout << "4:for Heavy vehicles:\n";

    switch (ch)
    {
    case 1:
        twowheelers *t1;
        twowheelers t2;
        t1 = &t2;
        cout << "Two Wheelers Toll " << t2.twoWheel() << "\n";

        break;

    case 2:
        threewheelers t3;
        cout << "Three Wheelers Toll " << t3.threeWheel() << "\n";

        break;

    case 3:
        fourwheelers f1;
        cout << "four Wheelers Toll " << f1.fourWheel() << "\n";

        break;

    case 4:

        heavyvehicles h1;

        cout << "heavy Wheelers Toll " << h1.heavyVehi() << "\n";

        break;
    }
}
