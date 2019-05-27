#include <stdio.h>

void main()
{
    int i, num, even = 0, odd = 0;
    int array[num];

    printf("Enter the size of an array \n");
    scanf("%d", &num);
    printf("Enter the elements of the array \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Even numbers in the array are : ");
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
            printf("%d \t", array[i]);
        }
    }
    printf("\nOdd numbers in the array are: ");
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 != 0)
        {
            odd++;
            printf("%d \t", array[i]);
        }
    }
    printf("\nThere are %d even numbers and %d odd numbers out of %d given numbers.\n", even, odd, num);
}