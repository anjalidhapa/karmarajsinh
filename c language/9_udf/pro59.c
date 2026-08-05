#include <stdio.h>
int area_tri(float b, float h)
{
    float area;
    area=0.5*h*b;
    return area;
}

void main(){
    float b,h,area;
    printf("Enter value of base: ");
    scanf("%f",&b);
    printf("Enter value of height: ");
    scanf("%f",&h);

    area= area_tri(b,h);

    printf("area of triangle ---> %f",area);
}