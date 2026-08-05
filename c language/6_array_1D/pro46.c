#include<stdio.h>
void main()
{
    int i,b,a[5];
    
    printf("Enter value for array 1\n");
    
    for (i=0;i<5;i++)
    {
        printf("Enter value [%d]:",i);
        scanf("%d",&a[i]);
    }
    b=a[0];
    for (i=0;i<5;i++)
    {
        if (b<a[i])
        {
            b=a[i];
        }
    }
    printf("%d",b);
}