
#include <stdio.h>

void main() {
    
    int a[6][6],i,j;
    
    printf("MATRIX \n");


    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
                a[i][j]=i*j;
              printf("%d\t",a[i][j]);     
        }
        printf("\n");
    }

}