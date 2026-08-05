#include <stdio.h>

void main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    switch (num) {
        case 10:
        printf("value of num is 10 ");
        break;
        
        case 4:
        printf("value of num is 4 ");
        break;
        
        case 11:
        printf("value of num is 11 ");
        break;
        
        case -39:
        printf("value of num is -39 ");
        break;
    
        // case -39: // error 
        // printf("value of num is -39 ");
        // break;
        
        default:
            printf("default case ");

    }
}