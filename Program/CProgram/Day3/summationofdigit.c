#include <stdio.h>
int Sum_Of_Digit(int);
int Reverse_Digit(int);
void main()
{
    int no, ans, reverse;
    printf("Enter The Number:");
    scanf("%d", &no);
    ans = Sum_Of_Digit(no);
    reverse = Reverse_Digit(no);

    printf("Sum Of Digit Is: %d\n", ans);
    printf("Reverse No Is: %d", reverse);
}
int Sum_Of_Digit(int x)
{
    int rem, sum = 0;
    while (x > 0)
    {
        rem = x % 10;
        sum = sum + rem;
        x = x / 10;
    }

    return sum;
}
int Reverse_Digit(int y)
{
    int rem, rev = 0;
    while (y > 0)
    {
        rem = y % 10;
        rev = rev * 10 + rem;
        y = y / 10;
    }

    return rev;
}