#include<stdio.h>
void main()
{
    int i,a[5],b[5],c[10];
    
    printf("Enter value for array 1\n");
    
    for (i=0;i<5;i++)
    {
        printf("Enter value [%d]:",i);
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    
    printf("\nEnter value for array 2\n");

    for (i=0;i<5;i++)
    {
        printf("Enter value [%d]:",i);
        scanf("%d",&b[i]);
        c[i+5]=b[i];
    }
    for (i=0;i<10;i++)
    {
        printf("%d\t",c[i]);
    }
    
}