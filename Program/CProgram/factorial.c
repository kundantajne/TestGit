#include <stdio.h>
void main()
{
    int n, i;
    int fact = 1;
    printf("Enter the Factorial No :-");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        fact = fact * i;
    }

    printf("Factorial of Given no is:\t %d", fact);
}