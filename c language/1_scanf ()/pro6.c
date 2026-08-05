#include<stdio.h>

void main(){
    float p,r,y,si;
    printf("enter principle amount:");
    scanf("%f",&p);
    printf("enter rate of interest:");
    scanf("%f",&r);
    printf("enter number of years:");
    scanf("%f",&y);

    si=p*r*y/100 ;

    printf("simple interest:%f",si);
}