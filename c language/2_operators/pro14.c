#include<stdio.h>
void main(){
    int year ;
    printf("Enter a year(20xx):");
    scanf("%d",&year);

    if (year%4==0)
        printf("Year %d is leap year",year);
    if (year%4!=0)
        printf("Year %d is not a leap year",year);
}