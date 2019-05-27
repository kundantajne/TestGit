#include <stdio.h>
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, sum = 0;

    for (i = 5; i >= 0; i--)
    {
        sum = sum + arr[i];
    }
    printf("sum of array value is: %d", sum);
}