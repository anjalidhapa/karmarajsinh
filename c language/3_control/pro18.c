#include<stdio.h>
void main(){
    float a ;
    printf("Enter the total amount:");
    scanf("%f",&a); 
    if (a>=5000) {
        a=a-(a/10);
        printf("total amount:%f",a);
    }
    else printf("total amount:%f",a);
}