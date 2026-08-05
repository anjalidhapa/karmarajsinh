#include <stdio.h>
int ascii(char a)
{
    int b;
    b=a;
    return b;
}

void main()
{
    char a;
    int b;
    printf("Enter a value to find its ascii value: ");
    scanf("%c",&a);
    b= ascii(a);
    printf("ascii value ---> %d",b);
}