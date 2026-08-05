#include <stdio.h>
 void main()
 {
    int i,j=1,k;
    for( i=1 ; i<=4 ; i++ )
    {
        for( k=1 ; k<=i ; k++ )
        {
            printf("%d",j);
            j++;
        }
        
        printf("\n");
    }
 }