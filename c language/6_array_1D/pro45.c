#include<stdio.h>
void main()
{
    int i,a[5],b[5],c[5];
    
    printf("Enter value for array 1\n");
    
    for (i=0;i<5;i++)
    {
        printf("Enter value [%d]:",i);
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter value for array 2\n");

    for (i=0;i<5;i++)
    {
        printf("Enter value [%d]:",i);
        scanf("%d",&b[i]);
    }

    printf("SUM OF ARRAY 1 AND ARRAY 2\n");
    for (i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d\n",c[i]);
    }
    
}