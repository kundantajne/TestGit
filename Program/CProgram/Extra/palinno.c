#include <stdio.h>
int main()
{
    int no, ans, temp, rem;

    printf("enter the no");
    scanf("%d", &no);

    temp = no;

    while (no > 0)
    {
        rem = no % 10;
        ans = ans * 10 + rem;
        no = no / 10;
    }

    if (temp == ans)
    {
        printf("%d Its a Palindrome no", temp);
        /* code */
    }
    else
    {
        printf("%d its not palindrome no", temp);
    }

    return 0;
}