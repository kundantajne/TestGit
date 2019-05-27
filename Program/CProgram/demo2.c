// #include <stdio.h.>
// int myfun(int *);
// void main()
// {
//     int a = 10;
//     // int b = 20;
//     // printf("%d\n", a);
//     // // int *iptr = &a;
//     // // char *cptr = &b;
//     // // *iptr = 20;
//     // // printf("%d\n", a);

//     // // printf("%c", *cptr);
//     // myfun(&a, &b);
//     // printf("a:%d\n", a);
//     // printf("b:%d", b);
//     int t1;
//     int *ptr = &a;
//     printf("address of a:%u\n", &a);
//     t1 = myfun(&a);
//     printf("%d\n", t1);
//     printf("%d\n", a);
//     printf("address of a in t1:%u\n", t1);
//     printf("address of  t1:%u\n", &t1);
// }
// // void myfun(int *ptr1, int *ptr2)
// // {
// //     int temp;
// //     temp = *ptr1;
// //     *ptr1 = *ptr2;
// //     *ptr2 = temp;
// // }

// int myfun(int *ptr1)
// {
//     *ptr1 = 20;
//     printf("address of a in ptr1:%u\n", ptr1);
//     printf("address of  ptr1:%u\n", &ptr1);
//     return *ptr1;
// }

#include <stdio.h>
// int *somefun();
void main()
{

    int arr[5] = {10, 11, 12, 13, 14};
    int i;
    int *ptr;
    ptr = arr;
    printf("arr[i]\t");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n(*ptr+i)\t");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", *(ptr + i));
    }
    printf("\n(*arr+i)\t");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", *(arr + i));
    }
    printf("\nptr[i]\t");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", ptr[i]);
    }
    printf("\ni[ptr]\t");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", i[ptr]);
    }
}

// int *somefun()
// {
//     int x = 33;

//     return &x;
// }