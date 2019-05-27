#include <stdio.h>
void main()
{
    int no, i;

    printf("Enter The Size of Array:");
    scanf("%d", &no);

    int arr[no];
    printf("Enter The Array Element:");
    for (i = 0; i < no; i++)
    {

        scanf("%d", &arr[i]);
    }

    printf(" \n");
    for (i = 0; i < no; i++)
    {

        printf(" %d", arr[i]);
    }
    printf(" \n");
    for (i = no; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // int loop;

    // for (loop = 9; loop >= 0; loop--)
    //     printf("%d ", array[loop]);
}