#include <stdio.h>
void main()
{
    int b, i, a[5], flag = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number [%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("Enter value of B:");
    scanf("%d", &b);

    for (i = 0; i < 5; i++)
    {
        if (b == a[i])
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Value of B is stored in array");
    }
    else
    {
        printf("Value not found");
    }
}