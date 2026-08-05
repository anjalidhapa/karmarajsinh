#include<stdio.h>

void main()
{
    int a,b;
    printf("enter value a :");
    scanf("%d",&a);
    printf("enter value b :");
    scanf("%d",&b);
    // c=a ;
    // a=b ;
    // b=c ;
    a=a+b ;
    b=a-b ;
    a=a-b ;
    printf("value a:%d \n value b:%d",a,b);
}