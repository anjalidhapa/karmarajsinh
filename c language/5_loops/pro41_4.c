#include <stdio.h>
 void main()
 {
    int i,j,k;
    char a='a';
    for( i=1 ; i<=4 ; i++ )
    {
         for (j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for( k=1 ; k<=i ; k++ )
        {
            printf("%c ",a);
        }
        a++;
        
        printf("\n");
    }
 }