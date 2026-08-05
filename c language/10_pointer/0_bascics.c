#include <stdio.h>

int main() {

    int num = 10;

    printf("address of num = &num = %p \n", &num);

    // pointer -> int *pointerName = &varName;
    int *numPoint = &num;
    printf("numPoint = %p \n", numPoint);
    printf("value stored at address %p is %d \n", numPoint, *numPoint);
    
    *numPoint = 30;
    printf("value stored at address %p is %d \n", numPoint, *numPoint);
    printf("updated num = %d \n", num);
    return 0;
}