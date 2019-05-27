#include <stdio.h>
int primeno();
int main()
{
    int result, i, count = 0, no;
    no = primeno();
    for (i = 1; i < no; i++)
    {
        if (no % i == 0)
        {
            count++;
        }
    }
    if (no == 1)
    {
        printf("Its Not Prime And Not Composite No.");
    }
    else
    {

        if (count == 1)
        {
            printf("Its a Prime no.");
        }
        else
        {
            printf("Its Not A Prime No.");
        }
    }

    // printf("%d", no);

    return 0;
}

int primeno()
{
    int no;
    printf("Enter A Number:-\n");
    scanf("%d", &no);

    return no;
}