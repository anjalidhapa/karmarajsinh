#include<stdio.h>

void main(){

    int a;

    printf("Enter value of a --> ");
    scanf("%d",&a);

    if (a==0)
            printf("zero");
    else if(a>0)
            printf("positive");
    else if (a<0)
            printf("negative");

}