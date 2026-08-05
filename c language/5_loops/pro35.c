#include <stdio.h>

void main() {
    int num;
    int temp;
    
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    
    int length = 0; // number of digits
    while (num != 0) {
        length++;
        num /= 10; // remove last digit
    }
    num = temp;
    // printf("length = %d num = %d ", length, num);
    
    int sum = 0;
    while (num != 0) {
        int ld = num % 10; // get last digit
        
        int tempAns = 1;
        for (int i = 1; i <= length; i++) {
            tempAns *= ld;
        }
        // printf("temp ans = %d \n", tempAns);
        sum += tempAns;
            
        num /= 10; // remove last digit 
    }
    num = temp;
    
    printf("sum = %d \n", sum);
    printf(sum == num ? "armstrong number " : "normal number ");
}