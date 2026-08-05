#include <stdio.h>
void main()
{
    int num;
    int rnum = 0, ld;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        ld = num % 10; // get last digit
        rnum = rnum * 10 + ld;
        num /= 10; // remove last digit
        printf("ld = %d | rnum = %d | num = %d \n", ld, rnum, num);
    }
    printf("reverse number = %d \n", rnum);
}