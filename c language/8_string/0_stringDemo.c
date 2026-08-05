#include <stdio.h>
void main()
{
    char name[45];
    int l = 0, i;
    printf("enter name:");
    gets(name);
    puts(name);
    // scanf("%s",&name);
    // printf("name:%s",name);
    for (i = 0; name[i] != '\0'; i++)
    {
        l++;
    }
    printf("length:%d",l);                                                                                                                                                                                                                                                                 
}