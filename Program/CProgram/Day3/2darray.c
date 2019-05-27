#include <stdio.h>

void main()
{
    int row, col, i, j, sum;
    int arr[row][col];

    printf("Enter Row element:");
    scanf("%d", &row);
    printf("Enter Col Element:");
    scanf("%d", &col);

    printf("Enter The Element in 2D-Array:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", arr[i][j]);
        }
    }
    printf("Sum Of 2D Array Element:");
    sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d", sum);
}