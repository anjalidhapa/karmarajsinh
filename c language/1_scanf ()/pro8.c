#include<stdio.h>
void main() {
    int days;
    int years, months, rdays;
    
    printf("Enter days : ");
    scanf("%d", &days);

    years = days / 365; // int / int -> int 
    printf("Years = %d \n", years);

    days = days - (years * 365);
    // printf("new days = %d \n", days);
    
    months = days / 30;
    printf("Months = %d \n", months);
    
    days = days - (months * 30);
    // printf("new days = %d \n", days);

    rdays = 30 - days;
    printf("remaining days = %d \n", rdays);
}