#include <stdio.h>
void primeno(int);
void main()
{
    int no;
    printf("Enter A Number:-\n");
    scanf("%d", &no);

    primeno(no);
}

void primeno(int x)
{
    int i, count = 0;
    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (x == 1)
    {
        printf("Its Not Prime And Not Composite No.");
    }
    else
    {

        if (count == 1)
        {
            printf("Its a Prime no.");
        }
        else
        {
            printf("Its Not A Prime No.");
        }
    }
}