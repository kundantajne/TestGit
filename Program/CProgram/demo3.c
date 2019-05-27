// #include <stdio.h>
// void myfun();
// // void xyz();
// int a = 30;
// void main()
// {
//     int a = 10;

//     // xyz();
//     myfun();
//     int b;
//     b = 10;
//     printf("inside main: %d\n", a);
// }
// void myfun()
// {
//     void xyz();
//     xyz();
//     printf("inside myfun :%d\n", a);
// }
// void xyz()
// {
//     printf("hello\n");
// }

#include <stdio.h>
void main()
{
    struct student
    {
        char name[20];
        int roll;
        float sal;
    };

    struct student s = {'kundan'};
    printf("\n%d%f", s.roll, s.sal);
}