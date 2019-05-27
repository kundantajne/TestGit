#include <stdio.h>
struct student
{
    int roll;
    char name[20];
};

void main()
{
    struct student arr[3];

    storemyfun(&arr, 3);
    printmyfun(&arr, 3);
}

storemyfun(struct strudent *ptr, int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("Emter your Roll No:");
        scanf("%d", *ptr[i].roll);
        printf("Enter your Name:");
        scanf("%s", *ptr[i].name);
    }
}
printmyfun()
{
    printf("\nPrinting Student Information");
    printf("Roll is:");
}
