#include <stdio.h>
int fact(int);
void main()
{
    int n = 5;
    // int f = 1;
    // printf("Enter the Factorial No :-");
    // scanf("%d", &n);
    int ans;
    ans = fact(n);
    printf("%d", ans);
}
int fact(int x)
{
    int i;
    for (i = 1; i <= x; i++)
    {
        y = y * i;
    }
    return y;
}