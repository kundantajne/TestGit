#include <stdio.h>
void main()
{
    float sal, da, ta, hra, total;

    printf("enter the salary:");
    scanf("%f", &sal);

    if (sal <= 5000)
    {
        da = sal * 0.10;
        ta = sal * 0.20;
        hra = sal * 0.25;
    }
    else
    {
        da = sal * 0.15;
        ta = sal * 0.25;
        hra = sal * 0.30;
    }

    total = sal + da + ta + hra;
    printf("total salary is: %f", total);
}