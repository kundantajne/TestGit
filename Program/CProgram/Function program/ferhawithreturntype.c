#include <stdio.h>
int fahrenheit();
void main()
{
    printf("celsius  for given fahrenheit:%d", fahrenheit());
}

int fahrenheit()
{
    int f, c;
    printf("Enter the Value fahrenheit ");
    scanf("%d", &f);

    c = (f - 32) * 5 / 9;

    return c;
}