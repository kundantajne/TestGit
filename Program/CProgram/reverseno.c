#include <stdio.h>
void main()
{
    int r, n;
    int sum = 0;
    printf("Enter The Number:");
    scanf("%d", &n);

    while (n > 0)
    {

        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    printf("reversed no is: %d", sum);
}