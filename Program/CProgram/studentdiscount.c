#include <stdio.h>
void main()
{
    int ch;
    float amount, discount, total;
    printf("Enter The Amount:\n");
    scanf("%f", &amount);
    printf("1:If He Is Student\n");
    printf("2:If He Is Not Student\n");
    printf("Enter Your Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        if (amount > 500)
        {
            discount = amount * 0.20;
        }
        else
        {
            discount = amount * 0.10;
        }
        total = amount - discount;
        printf("amount is:%f\n", amount);
        printf("Discount is: %f\n", discount);
        printf("Total is: %f\n", total);

        break;

    case 2:
        if (amount > 600)
        {
            discount = amount * 0.15;
        }
        else
        {
            discount = 0;
        }
        total = amount - discount;
        printf("amount is:%f\n", amount);
        printf("Discount is: %f\n", discount);
        printf("Total is: %f\n", total);

    default:
        break;
    }
}