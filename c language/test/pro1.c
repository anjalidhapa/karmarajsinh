#include<stdio.h>
#include<string.h>

void main(){

    int length;
    char a[20];
    printf("Enter a string to find its length --> ");
    scanf("%s",&a);
    length=strlen(a);
    printf("length of string is %d",length);

}