#include <stdio.h>
int sumofdigit();
void main()
{
    printf("Sum of digits is  = %d", sumofdigit());
}
int sumofdigit()
{
    int n, temp, sum = 0, remainder;

    printf("Enter an integer\n");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) //(temp>0) we can do this also.
    {
        remainder = temp % 10;
        sum = sum + remainder;
        temp = temp / 10;
    }

    return sum;
}