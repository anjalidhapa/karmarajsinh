#include <stdio.h>
#include <string.h>

void main() {
    char str[10];
    
    printf("Enter a string : ");
    scanf("%s", &str);
    
    // string length
    int l = strlen(str);
    printf("length = %d \n", l);
    
    // string copy / assign
    char str2[20];
    // str2 = str; -> error 
    strcpy(str2, str); // str2 = str
    printf("str2 = %s \n", str2);
    
    // merge / concatination
    char s1[] = "hello ";
    char s2[] = "world ";
    strcat(s1, s2);
    printf("s1 = %s \n", s1);
    
    // compare string
    // str1, str2 - +ve - (str1 > str2) - 5 - 3 - +ve
    // str1, str2 - -ve -> (str1 < str2) -> 3 - 5 -> -ve
    // str1, str2 -> 0 -> str1 == str2 -> 1 - 1 -> 0
    
    int check = strcmp(str, str2);
    if (check > 0) 
        printf("str1 > str2 ");
    else if (check < 0)
        printf("str1 < str2 ");
    else // check == 0
        printf("str1 == str2 ");
    printf("\n");
    
    printf("str = %s \n", str);
    strrev(str);
    printf("str = %s \n", str);
}