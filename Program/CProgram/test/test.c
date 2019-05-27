#include <stdio.h>
int twoWheelers(int, int);
int threeWheelers(int, int);
int fourWheelers(int, int);
int heavyVehicles(int, int);

void main()
{
    int ch, no, ans, basic;
    char answer;
    do
    {
        printf("Toll For Vehicle:-\n");
        printf("1:For Two Wheelers:\n");
        printf("2:For Three Wheelers:\n");
        printf("3:For four Wheelers:\n");
        printf("4:For heavy vehicles:\n");

        printf("Enter Your Choice:\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Two Wheelers:\n");
            basic = 20;

            printf("Enter The No Of Person:");
            scanf("%d", &no);
            ans = twoWheelers(no, basic);
            if (no > 2)
                printf("The Basic Toll For Two Wheelers + Extra Charges =%d", ans);

            else
                printf("The Basic Toll For Two Wheelers is:%d", basic);
            break;

        case 2:
            printf("Three Wheelers:\n");
            basic = 30;
            printf("Enter The No Of Person:");
            scanf("%d", &no);

            ans = threeWheelers(no, basic);

            if (no > 3)
                printf("The Basic Toll For Three Wheelers + Extra Charges =%d", ans);
            else
                printf("The Basic Toll For Three Wheelers is:%d", basic);

            break;

        case 3:
            printf("four Wheelers:\n");
            basic = 40;
            printf("Enter The No Of Person:");
            scanf("%d", &no);

            ans = fourWheelers(no, basic);

            if (no > 4)
                printf("The Basic Toll For Four Wheelers + Extra Charges =%d", ans);
            else
                printf("The Basic Toll For Four Wheelers is:%d", basic);

            break;
        case 4:
            printf(" heavy vehicles:\n");
            basic = 60;
            printf("Enter The No Of Person:");
            scanf("%d", &no);
            ans = heavyVehicles(no, basic);
            if (no > 6)
                printf("The Basic Toll For Four Wheelers + Extra Charges =%d", ans);
            else
                printf("The Basic Toll For Four Wheelers is:%d", basic);
            break;
        default:
            break;
        }
        printf("\nDo You Want to Continue Press y || n :");
        scanf("%s", &answer);

    } while (answer == 'y');
}

int twoWheelers(int no, int basic)
{
    int toll;

    toll = basic + (no - 2) * 10;

    return toll;
}
int threeWheelers(int no, int basic)
{
    int toll;

    toll = basic + (no - 3) * 20;

    return toll;
}

int fourWheelers(int no, int basic)
{
    int toll;

    toll = basic + (no - 4) * 40;

    return toll;
}
int heavyVehicles(int no, int basic)
{
    int toll;

    toll = basic + (no - 6) * 100;

    return toll;
}
