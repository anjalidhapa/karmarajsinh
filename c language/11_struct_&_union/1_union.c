#include <stdio.h>
#include <stdbool.h>

union Student {
    int age;
    char grade;
    bool pass; // true / false    
};
void main() {
    union Student s1;

    s1.age = 10;
    printf("s1.age = %d \n", s1.age);
    
    s1.grade = 'a';
    printf("s1.grade = %c \n", s1.grade);
    printf("s1.age = %d \n", s1.age);

    // union Student s2 = {10, 'a', true}; // error
}