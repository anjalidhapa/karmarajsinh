#include<stdio.h>
void main(){
    float a,b,c,d,e,total,per;
    printf("\nEnter marks of subject 1:");
    scanf("%f",&a);
    printf("\nEnter marks of subject 2:");
    scanf("%f",&b);
    printf("\nEnter marks of subject 3:");
    scanf("%f",&c);
    printf("\nEnter marks of subject 4:");
    scanf("%f",&d);
    printf("\nEnter marks of subject 5:");
    scanf("%f",&e);

    total=a+b+c+d+e;
    per=(total/500)*100;

    if (per>=40)
        printf("\npass");
    else
        printf("\nfail");
}