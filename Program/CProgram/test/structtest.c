#include <stdio.h>

typedef struct dob
{
    int day;
    int month;
    int year;
} date;

typedef struct person
{
    int adhar;
    char name[20];
    char gender;
    date d1;
} person;
void storevalue(person *, int);
void main()
{
    person p1[10];
    storevalue(p1, 5);
    // disply();
    // search();
    // edit();
}
void storevalue(person *p1, int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("Enter Your Adhar number:");
        scanf("%d", &p1[i].adhar);
        printf("Enter your Name:");
        scanf("%s", &p1[i].name);
    }
}
