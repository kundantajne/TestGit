#include <stdio.h>
void stringlength();
void copyString();
void stringJoin();
char ReverseString(char *);
void main()
{

    int ch, i;

    printf("Enter any option:\n\n");
    printf("1:Length of string\n");
    printf("2:Compare two strings\n");
    printf("3:Copy one string into another\n");
    printf("4:Join two strings into one\n");
    printf("5:Reverse the given string\n");
    printf("6:Check is the string is present in another string.\n");
    printf("7:Convert the given string into upper case and lower case.\n");

    printf("Enter Your Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("1:Length of string\n");
        stringlength();
        break;
    case 2:
        // printf("Compare the String:");

        // printf("Enter The First String:");
        // scanf("%s", &str1);
        // printf("Enter The Second String:");

        break;
    case 3:
        printf("copy String :\n");
        copyString();
        break;
    case 4:
        printf("Joining two string");

        stringJoin();

        break;
    case 5:
        printf("Reverse The String:");
        char mystring[50], ans;

        printf("C Program to reverse a string\n");
        printf("Enter a string: ");

        scanf("%s", &mystring);
        ans = ReverseString(mystring);
        printf("%d", ans);
        break;
    case 6:
        break;
    case 7:
        break;
    default:
        printf("Invalid Option!.........");
        break;
    }
}
void stringlength()
{
    char str1[30];
    int i, len = 0;
    printf("Enter The String:");

    scanf("%s", &str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }
    printf("length Of Given String Is :%d", len);
}
void copyString()
{
    char s1[30], s2[30];
    int i;

    printf("Enter string s1: ");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; ++i)
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
}
void stringJoin()
{
    int j, i;
    char str1[30], str2[30];
    printf("Enter The First String:");
    scanf("%s", &str1);
    printf("Enter The Second String");
    scanf("%s", &str2);
    for (i = 0; str1[i] = '\0'; i++)

        for (j = 0; str2[j]; j++)
        {
            str1[i] = str2[j];
        }
    str1[i] = '\0';
    printf("join String:", str1);
}

char ReverseString(char *rev)
{
    int i, len;

    for (i = 0; rev[i] != '\0'; i++)
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", rev[i]);
    }
}