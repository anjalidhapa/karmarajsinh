#include<stdio.h>
void main()
{
    int i,a,c=0;
    int b=1;

    printf("Enter value of a:");
    scanf("%d", &a);
    
    while(c<1)
    { 
      if (a%b!=0)
      {
         printf("a is a prime number ");
         c++ ;
      }
      
      b++ ;
   }
}