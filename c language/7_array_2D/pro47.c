
#include <stdio.h>

void main() {
    
    int a[3][3],i,j,b[3][3],c[3][3];
    
    printf("MATRIX 1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter no a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("MATRIX 2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter no b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j] ;
        }
    }    
       
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}