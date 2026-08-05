#include <stdio.h>
#include <string.h>
int case_con(char str[])
{
     int x,z=0;
     for (x=0; str[x]!='\0' ;x++)
    {
        if(str[x]>='A' && str[x]<='Z')
        {
            str[x]=str[x]+32;
        }
        else
        {
            str[x]=str[x]-32;
        }
    }
    return str[20];
}

void main()
{
    int x,z=0;
    char str[20],str2[20];
     printf("Enter a word to turn in upper/lower case ---> ");
    scanf("%s",&str);

    case_con(str);
    printf("string ---> %s",str);
}