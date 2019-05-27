#include <stdio.h>
int power(int, int);
void main()
{

    int x, y, z;

    printf("Enter The Number:-");
    scanf("%d", &x);

    printf("Enter The Power:-");
    scanf("%d", &y);
    z = power(x, y);
    printf("Power Of Given Number Is: %d", z);
}
int power(int a, int b)
{
    int i, result = 1;
    for (i = b; i > 0; i--)
    {
        result = result * a;
    }

    return result;
}