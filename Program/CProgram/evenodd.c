#include <stdio.h>
void main()
{
    int no;

    printf("Enter the Number:");
    scanf("%d", &no);

    if (no % 2 == 0)
    {
        printf("the no is even");
    }
    else
    {
        printf("the no is odd");
    }
}
