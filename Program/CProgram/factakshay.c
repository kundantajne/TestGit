#include <stdio.h>
void main()
{
    int sum, i, j, n;
    //    int fact = 1;
    printf("Enter the Factorial No :-");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        // printf("Factorial of %d is:\t %d\n", i, fact);
        sum = sum + fact;
    }

    printf("sum of :\t %d", sum);
}