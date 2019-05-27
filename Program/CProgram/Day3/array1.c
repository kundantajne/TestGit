#include <stdio.h>

void main()
{

    int i, no, ch;
    float sum;

    printf("Enter The Size Of Array:");
    scanf("%d", &no);
    int arr[no];
    printf("Enter The Array Number:\n");

    for (i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("1:Sum\n");
    printf("2:Average\n");
    printf("3:Minimum\n");
    printf("4:Maximum\n");
    printf("Enter Your Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Sum Of Array Element Is:\n");
        sum = 0;
        for (i = 0; i < no; i++)
        {
            sum = sum + arr[i];
        }
        printf("Sum Of Array Element is : d", sum);

        break;

    case 2:
        printf("Average Of Array Element Is:\n");
        sum = 0.0;
        float avg;
        for (i = 0; i < no; i++)
        {
            sum = sum + arr[i];
        }
        avg = sum / no;
        printf("Average Of Array Element: %f", avg);

        break;

    case 3:
        printf("Minimum Array Element Is:\n");
        int minimum;
        minimum = arr[0];
        for (i = 0; i < no; i++)
        {
            if (arr[i] < minimum)
            {
                minimum = arr[i];
            }
        }
        printf("Minimum Array Element Is: %d", minimum);
        break;
    case 4:
        printf("Maximum Array Element Is:\n");
        int maximum;
        maximum = arr[0];
        for (i = 0; i < no; i++)
        {
            if (arr[i] > maximum)
            {
                maximum = arr[i];
            }
        }
        printf("%d", maximum);
        break;
    default:
        break;
    }
}