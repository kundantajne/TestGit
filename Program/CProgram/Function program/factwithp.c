#include <stdio.h>
void fact(int);
void main()
{
    int n = 5;

    // printf("Enter the Factorial No :-");
    // scanf("%d", &n);
    fact(n);
}

void fact(int x)
{
    int i, y;
    for (i = 1; i <= x; i++)
    {
        y = y * i;
    }
    printf("Factorial of Given no is:- %d", y);
}