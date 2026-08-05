#include<stdio.h>

void main ()
{
    int num1,num2 ;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&num1);
    printf("ENTER LAST NUMBER:");
    scanf("%d",&num2);
    while (num1 <= num2)
    {
        printf("%d\n",num1);
        num1++ ;
    }
}