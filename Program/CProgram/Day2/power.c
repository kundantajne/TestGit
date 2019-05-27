#include <stdio.h>

void main()
{
    int x, y, i, result;

    printf("Enter The Number:-");
    scanf("%d", &x);

    printf("Enter The Power:-");
    scanf("%d", &y);

    for (i = 1; i <= y; i++)
    {
        result = result * x;
    }

    printf("The Power Of Given No Is: %d", result);
}