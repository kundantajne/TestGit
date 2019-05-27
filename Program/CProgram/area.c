#include <stdio.h>
void main()
{
    float r, area, PI = 3.14f, perimeter;
    int ch, l, b, rarea;
    printf("enter yourchoice :-");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("enter the radius of circle:");
        scanf("%f", &r);

        area = PI * r * r;
        perimeter = 2 * PI * r;

        printf("area of circle is:%f\n", area);
        printf("perimeter Of Circle: %f", perimeter);

        break;

    case 2:
        printf("enter the length of recangle:");
        scanf("%d", &l);

        printf("enter the breadth of recangle:");
        scanf("%d", &b);

        rarea = l * b;
        perimeter = 2 * (l + b);

        printf("area of circle is:%d", rarea);
        printf("perimeter of rectangle:%f", perimeter);

        break;

    default:
        printf("incorect choice");
        break;
    }
}