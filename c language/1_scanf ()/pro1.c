#include <stdio.h>
void main() {
    int a, b, sum, sub, multi;
    float divi;

    printf("enter a number:");
    scanf("%d", &a);
    printf("\n enter 2nd number:");
    scanf("%d", &b);
    
    sum = a + b;
    sub = a - b;
    multi = a * b;
    divi = (float)a / b;
    
    // printf("sum=%d \n sub=%d \n multiply=%d \n division=%d", sum, sub, multi, divi);
    printf("Sum = %d \n", sum);
    printf("Sub = %d \n", sub);
    printf("Product = %d \n", multi);
    printf("Div = %f \n", divi);
}

// type casting -> changing data type of a variable 
// int / int -> int 
// float / int -> float
// int / float -> float
// float / float -> float