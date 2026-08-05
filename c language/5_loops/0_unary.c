#include <stdio.h>

void main() {
    int num = 4;

    num += 10;
    printf("num = %d \n", num);
    
    num++; 
    num++; 
    num++; 
    printf("num = %d \n", num);
    
    num *= 10;
    printf("num = %d \n", num);

    num /= 5;
    printf("num = %d \n", num);

    num %= 3;
    printf("num = %d \n", num);
    
    num -= 3;
    printf("num = %d \n", num);
    
    num--;
    printf("num = %d \n", num);
}
// + - ...
// > >= <= ... 

// 2 + 3 -> binary

// num = 4
// num = num + 10 -> unary operation
// num = 4 + 10
// num = 14

// num = num + 10 -> unary operation
// num += 10 -> unary operation
// += -= *= /= %=

// num = num % 5 


// num = num + 1 -> num += 1 -> num++
// num = num - 1 -> num -= 1 -> num--
// // "** // %%" -> not supported 