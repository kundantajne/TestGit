#include <stdio.h>

void main()
{
    int ch, n;

    printf("Enter Your Choices");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        printf("Enter an integer\n");
        scanf("%d", &n);
        int temp, sum = 0, remainder;

        temp = n;

        while (temp != 0) //(temp>0) we can do this also.
        {
            remainder = temp % 10;
            sum = sum + remainder;
            temp = temp / 10;
        }

        printf("Sum of digits is  = %d\n", sum);
        break;

    case 2:

        printf("Enter The Number:");
        scanf("%d", &n);
        int r;
        int sum = 0;
        while (n > 0)
        {

            r = n % 10;
            sum = sum * 10 + r;
            n = n / 10;
        }
        printf("reversed no is: %d", sum);

        break;

    default:
        break;
    }
}