#include <stdio.h>
int sum_str(int a[])
{
    int i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

void main()
{
    int i, a[5], sum;
    printf("~~~~ADDITION OF 5 NUMBERS~~~~\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter number [%d]:", i);
        scanf("%d", &a[i]);
    }
    sum = sum_str(a);
    printf("\nSUM OF ALL 5 NUMBERS=%d",sum);
}