#include <stdio.h>

struct fanstruct
{
    float price;
    char C_name[10];
    char Type;
} f1;

void main()
{
    printf("Enter The Price Of Fan:");
    scanf("%f", &f1.price);

    printf("Enter The Company Name:");
    scanf("%s", &f1.C_name);

    printf("Enter The Type Of Fan:");
    scanf("%s", &f1.Type);

    printf("\nFan Info:");

    printf("\nPrice Of Fan:%f", f1.price);
    printf("\nCompany Name:%s", f1.C_name);
    printf("\nType Of Fan:%s", f1.Type);
}