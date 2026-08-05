#include <stdio.h>

void main() {
    /*int year ;
    printf("Enter a year(20xx):");
    scanf("%d",&year);

    // condition ? true code : false code;

    year % 4 == 0 ? printf("Leap year \n") : printf("Normal year \n");
    printf(year % 4 == 0 ? "Leap year \n" : "Normal year \n");

    int days = year % 4 == 0 ? 366 : 365;
    printf("days = %d \n", days);*/
    int pass,conf ;
    printf("Enter password (in integer):");
    scanf("%d",&pass);
    printf("Confirm password:");
    scanf("%d",&conf);
    printf(pass==conf ? "password confirmed" : "incorrect");
}