#include <stdio.h>

void switch_num(int *np1 , int *np2) {
    printf("before update: num 1 = %d , num 2 = %d \n", *np1 , *np2);
    *np1=*np1+*np2;
    *np2=*np1-*np2;
    *np1=*np1-*np2;
    printf("after update: num 1 = %d , num 2 = %d \n", *np1 , *np2);
}

int main() {

    int num1,num2;
    printf("Enter value of num1 : ");
    scanf("%d",&num1);
    printf("Enter value of num2 : ");
    scanf("%d",&num2);

    switch_num(&num1,&num2); // pass by ref
    printf("from main num1 = %d , num2 = %d\n", num1,num2);

    return 0;
}