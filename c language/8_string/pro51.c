#include<stdio.h>
void main(){

    int x,z=0;
    char str[20] ;
    // A=65 a=97
    printf("Enter a word to turn in upper/lower case ---> ");
    scanf("%s",&str);

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
    puts(str);
}