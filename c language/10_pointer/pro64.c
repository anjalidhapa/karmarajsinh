#include <stdio.h>

int string_length(char np1[])
{
    int i, l = 0, *p;
    p = &l;
    for (i = 0; np1[i] != '\0'; i++)
    {
        ++*p;
    }

    return l;
}

int main()
{

    char l, a[30];
    printf("Enter value of string to find its length : ");
    scanf("%s", &a);

    l = string_length(a);
    printf("length:%d", l);
    return 0;
}