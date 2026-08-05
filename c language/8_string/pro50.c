#include<stdio.h>
void main(){

    int x,z=0;
    char str[20] ;
    printf("Enter a word to find vowels and consonants ---> ");
    scanf("%s",&str);

    for (x=0; str[x]!='\0' ;x++)
    {
        if(str[x]=='a'|| str[x] == 'e' || str[x] == 'i' || str[x]=='o' || str[x]=='u')
        {
            z++;
        }
    }
    
    printf("Total number of vowels ---> %d",z);
    printf("\nTotal number of consonants ---> %d",x-z);

}