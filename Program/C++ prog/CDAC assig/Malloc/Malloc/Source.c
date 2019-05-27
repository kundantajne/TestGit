#include<stdio.h>
void* malloc(int);
void main()
{
	int i;
	int* ptr;
	ptr=(int *)malloc(sizeof(int)*5);
	for (i = 0; i < 5; i++)
	{
		scanf("%d",&ptr[i]);
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d", ptr[i]);
	}


}