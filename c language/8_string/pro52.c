#include <stdio.h>

void main() {
    int start = 0, end;
    char str[20];
    
    
    printf("Enter a word to reverse ---> ");
    scanf("%s", str);
    
    for (end = 0; str[end] != '\0'; end++); 
    // printf("end = %d ", end);
    
    end--;
    char temp;
    while (start <= end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
    printf("str = %s ", str);
}