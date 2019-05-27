
  
#include <stdio.h> 
void main()
{
    int no,i,count=0;
    printf("Enter A Number:-\n");
    scanf("%d",&no);
    for( i =1; i <no; i++)
    {
      if (no%i==0) {
          count++;
      }
      
    }
    if (no==1) {
        printf("Its Not Prime And Not Composite No.");
    }
    else
    {
        
    if (count==1) {
    printf("Its a Prime no.");
    }
    else
    {
        printf("Its Not A Prime No.");
    }
    }
      
}