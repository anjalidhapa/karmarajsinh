#include <stdio.h
>
 void main()
 {
    int i,j,k;
    char a='A';
    for( i=1 ; i<=4 ; i++ )
    {
        a='A';
        for( k=1 ; k<=i ; k++ )
        {
            printf("%c",a);
            a++;
        }
        
        printf("\n");
    }
 }  