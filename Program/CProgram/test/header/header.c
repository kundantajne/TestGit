#include <stdio.h>
int twoWheelers(int, int);
int threeWheelers(int, int);
int fourWheelers(int, int);
int heavyVehicles(int, int);

int twoWheelers(int no, int basic)
{
    int toll;

    toll = basic + (no - 2) * 10;

    return toll;
}
int threeWheelers(int no, int basic)
{
    int toll;

    toll = basic + (no - 3) * 20;

    return toll;
}

int fourWheelers(int no, int basic)
{
    int toll;

    toll = basic + (no - 4) * 40;

    return toll;
}
int heavyVehicles(int no, int basic)
{
    int toll;

    toll = basic + (no - 6) * 100;

    return toll;
}
