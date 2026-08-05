#include<stdio.h>

void main(){

int a[5],sum=0,i;
for( i=0 ; i<5 ; i++ ){

    printf("Enter arrayvalue of %d -->",i+1);
    scanf("%d",&a[i]);

}
for( i=0 ; i<5 ; i++ ){

    sum=sum+a[i];
    
}

printf("sum of all arrayvalue --> %d",sum);
}