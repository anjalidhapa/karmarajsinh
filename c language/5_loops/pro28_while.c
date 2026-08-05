#include <stdio.h>

void main()
{
    int num = 1;

    // odd numbers 
    while (num <= 30) {
        printf("%d ", num);
        // 1 3 5 7 9 ...
        num += 2;
    }

     printf("\n");
    num = 1;
    while (num <= 30) {
        // 1 2 3 4 5 6 7 ... 30
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    }

}