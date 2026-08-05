#include <stdio.h>

void main() {
    char indian;

    printf("Are you indian ? (y / n) : ");
    scanf("%c", &indian);

    if (indian == 'y') {
        int age;

        printf("Enter your age : ");
        scanf("%d", &age);

        if (age >= 18) {
            printf("You can vote ");
        } 
        else {
            printf("You cannot vote ");
        }
    }   
    else {
        printf("You can not vote ");
    }
}