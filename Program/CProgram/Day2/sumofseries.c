#include <stdio.h>
#include <math.h>

void main()
{
    int ch, i, no, j, sum;
    printf("1: for 1+2+3+n\n");
    printf("2: for 1!+2!+3!+….+n! \n");

    printf("3: for 1 ^ 1 + 2 ^ 2 + 3 ^ 3 + n ^ n\n");
    printf("Enter Your Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        printf("\nEnter The no:");
        scanf("%d", &no);
        // int sum = 0;
        for (i = 1; i <= no; i++)
        {
            sum = sum + i;
        }
        printf("Sum Of Given series is: %d", sum);

        break;
    case 2:
        printf("Enter the Factorial No :-");
        scanf("%d", &no);
        // int sum = 0;
        sum = 0;

        for (i = 1; i <= no; i++)
        {
            int fact = 1;

            for (j = 1; j <= i; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
        }

        printf("sum of series :\t %d", sum);
        break;
    case 3:
        printf("enter the no");
        scanf("%d", &no);
        // int sum = 0;
        j = 1;
        for (i = 1; i <= no; i++)
        {
            sum = sum + pow(i, j);
            j++;
        }
        printf("Sum Of Given series is: %d", sum);

        break;
    default:
        printf("Incorrect Choice!:");
        break;
    }
}