#include<stdio.h>
void main(){

    float a,b,c,d,e,total,per,r;
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

    printf("\ntotal marks=%f\n",total);
    printf("percentage=%f\n",per);

    if 
        (per<40) printf("Fail");
     else if 
        (per>=40||per<45) printf("Pass");
     else if 
        (per>=45||per<60) printf("Second class");
     else if
        (per>=60||per<75) printf("First class");
     else if 
        (per>=75||per<90) printf("Distinction");
     else if 
        (per>=90) printf("Merit");
     
}