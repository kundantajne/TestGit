#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
};
struct student storevalue(struct student s1);
// void studentInfo(struct student s1);

// void main()
// {
//     struct student s1;
//     printf("Enter Your Roll_No");
//     scanf("%d", &s1.roll_no);

//     printf("\nEnter Your Name:");
//     scanf("%s", &s1.name);

//     studentInfo(s1);
// }

// void studentInfo(struct student s1)
// {
//     printf("Student Information\n");
//     printf("Student Roll_No:\n", s1.roll_no);
//     printf("Student Name:", s1.name);
// }
void main()
{
    struct student s1;
    storevalue(s1);
    printf("%d", s1.roll_no);
    printf("%s", s1.name);
}

struct student storevalue(struct student s1)
{
    s1.roll_no = 10;
    strcpy(s1.name, "Kundan");
    return s1;
}
