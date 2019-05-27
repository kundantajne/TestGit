#include <stdio.h>
void main()
{
    float amount, discount, total;

    printf("Enter The Amount:");
    scanf("%f", &amount);

    if (amount < 1000)
    {
        discount = amount * .05;
    }
    else
    {
        discount = amount * 0.10;
    }
    total = amount - discount;

    printf("amount is:%f\n", amount);
    printf("Discount is: %f\n", discount);
    printf("Total is: %f\n", total);
}