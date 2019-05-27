#include <stdio.h>
#include <string.h>
#include <math.h>
void main()
{
    int i = 0, j;
    char a[55], b[55];

    printf("enter the main string: ");
    gets(a);
    printf("\n enter the second string: ");
    gets(b);
    while (a[i] != '\0')
    {
        if (a[i] == b[0])
        {
            j = 1;
            while (b[j] != '\0' && a[j + 1] != '\0' || b[j] == a[j + 1])
            {
                j++;
            }

            if (b[j] != '\0')
            {
                printf("sunstring found at %d position \n", i + 1);
            }
        }
        i++;
    }
}
