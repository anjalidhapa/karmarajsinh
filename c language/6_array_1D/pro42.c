#include<stdio.h>
void main(){
    int i,a[5],sum=0;
    printf("~~~~ADDITION OF 5 NUMBERS~~~~\n");
    for(i=0;i<5;i++)
    {
        printf("Enter number [%d]:",i);
        scanf("%d",&a[i]);

        sum=sum+a[i] ;
    }
    printf("\nSUM OF ALL 5 NUMBERS=%d",sum);
}