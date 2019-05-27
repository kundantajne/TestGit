#include <stdio.h>
typedef struct companystruct
{
    int C_id;
    char C_Name;
    char C_address;
} companystruct;

void main()
{
    companystruct c1;
    companystruct *ptr;
    ptr = &c1;
    ptr->C_id = 01;
    strcpy(ptr->C_Name, "Kundan");
    strcpy(ptr->C_address, "kharadi");

    printf("%d", ptr->C_id);
    printf("");
}