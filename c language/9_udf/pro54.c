#include<stdio.h>
int sum(int a , int b){
    return a+b ;
}

void main(){
    int c ;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    c= sum(a,b);
    printf("ans=%d",c);
}