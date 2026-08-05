#include<stdio.h>
void main()
{
    float a,b,c,d,e,per,total ;
    
    printf("enter marks of subject 1:");
    scanf("%f",&a);
    printf("\n enter marks of subject 2:");
    scanf("%f",&b);
    printf("\n enter marks of subject 3:");
    scanf("%f",&c);
    printf("\n enter marks of subject 4:");
    scanf("%f",&d);
    printf("\n enter marks of subject 5:");
    scanf("%f",&e);
    
    total=a+b+c+d+e ;

    per=(total/500)*100 ;
    printf("total=%f \n %tage=%f ",total,per);
}