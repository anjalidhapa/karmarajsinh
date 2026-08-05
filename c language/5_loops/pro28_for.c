#include <stdio.h>

void main()
{
    int i;
    for ( i = 1; i <= 30; i+=2)
    {
        printf("%d ", i);
    }

     printf("\n");

    for ( i=1 ; i<=30; i++)
    {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

}