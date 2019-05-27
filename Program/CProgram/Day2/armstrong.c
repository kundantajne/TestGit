#include <stdio.h>

void main()
{
    int no, rem, result, sum = 0, temp;

    printf("enter the no:");
    scanf("%d", &no);
    temp = no;
    while (no > 0)
    {
        rem = no % 10;
        result = rem * rem * rem;
        sum = sum + result;
        no = no / 10;
    }
    no = temp;
    if (no == sum)
    {
        printf("Its a armstrong no:");
    }
    else
    {
        printf("Its not a armstrong no:");
    }
}