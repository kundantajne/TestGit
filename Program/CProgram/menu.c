#include <stdio.h>
void main()
{
    float r, area, PI = 3.14f, sal, da, ta, hra, total;
    int ch, l, b, rarea, no;

    printf("1:area \n");
    printf("2:evenodd\n");
    printf("3:Basic Salary\n");
    printf("Enter your Choice");
    scanf("%d", &ch);
    int ch2;
    switch (ch)
    {
    case 1:
        printf("area of rectangle And Circle:\n");
        printf("1:circle \n");
        printf("2:rectangle \n");
        printf("enter your second choice:-");
        scanf("%d", &ch2);
        switch (ch2)
        {
        case 1:
            printf("enter the radius of circle:");
            scanf("%f", &r);

            area = PI * r * r;

            printf("area of circle is:%f", area);

            break;

        case 2:
            printf("enter the length of recangle:");
            scanf("%d", &l);

            printf("enter the breadth of recangle:");
            scanf("%d", &b);

            rarea = l * b;

            printf("area of circle is:%d", rarea);

            break;

        default:
            printf("incorect choice");
            break;
        }
        break;

    case 2:
        printf("\nEnter the Number:");
        scanf("%d", &no);

        if (no % 2 == 0)
        {
            printf("the no is even");
        }
        else
        {
            printf("the no is odd");
        }

        break;

    case 3:
        printf("enter the salary:");
        scanf("%f", &sal);

        if (sal <= 5000)
        {
            da = sal * 0.10;
            ta = sal * 0.20;
            hra = sal * 0.25;
        }
        else
        {
            da = sal * 0.15;
            ta = sal * 0.25;
            hra = sal * 0.30;
        }

        total = sal + da + ta + hra;
        printf("total salary is: %f", total);
        break;

    default:

        printf("incorect choice");
        break;
    }
}