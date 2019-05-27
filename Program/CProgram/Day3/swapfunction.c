#include <stdio.h>
void swapFunction(int *, int *);
void main()
{
    int x, y;

    printf("Enter The First Number:");
    scanf("%d", &x);
    printf("\nEnter The Second Number:");
    scanf("%d", &y);
    printf("Before Swaping Element Are A:%d B:%d", x, y);
    swapFunction(&x, &y);
    printf("\nSwap Element Are A:%d B:%d", x, y);
}
void swapFunction(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}