#include<stdio.h>
void main()
{
    int f,c;
    printf("Enter the Value fahrenheit ");
    scanf("%d",&f);

    c=(f-32)*5/9;

    printf("celsius  for given fahrenheit:-%d ",c);

}