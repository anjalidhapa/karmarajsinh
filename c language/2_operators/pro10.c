#include <stdio.h>

void main() {
    int num1, num2;

    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    // if (condition) {
    //     code
    // }

    if (num1 > num2) 
        printf("num1 is bigger ");
    
    if (num1 < num2) { // if (num2 > num1)
        printf("num2 is bigger ");
    }
    
    if (num1 == num2) {
        printf("Both numbers are same ");
    }
}