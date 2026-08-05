#include <stdio.h>
 void main()
 {
    int i,a[5],sum=0;
    for(i=0;i<5;i++)
    {
        printf("enter no[%d]:",i);
        scanf("%d",&a[i]);

    }  
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
        printf("%d\t",a[i]);
    }  
    printf("\nsum is:%d",sum);
    
    
 }