#include <stdio.h>
struct arrstudent
{
    int roll;
    char name[20];
};

void main()
{
    struct arrstudent arr[3];
    int i;
    struct student *ptr;
    ptr = arr;

    // arr[0].roll = 10;
    // strcpy(arr[0].name, "kundan");
    // printf("%d", arr[0].roll);
    // printf("%s", arr[0].name);

    for (i = 0; i < 3; i++)
    {
        printf("Emter your Roll No:");
        scanf("%d", &arr[i].roll);
        printf("Enter ypour Name:");
        scanf("%s", &arr[i].name);
    }
    printf("\nStudent Information:-");
    for (i = 0; i < 3; i++)
    {
        printf("\n Roll No:%d", arr[i].roll);
        printf("\n Name:%d", arr[i].name);
    }
}