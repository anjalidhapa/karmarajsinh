#include <stdio.h>

struct Student {
    char name[10];
    char grade;
    int age;
    float pr;
} a3;

int main() {
    
    // struct StructName objName;
    struct Student s1;
    printf("Enter your name :");
    scanf("%s", &s1.name);
    printf("name = %s \n", s1.name);
    
    // int arr[] = {1, 2, 3};
    // char str[] = "adfdfaf";
    struct Student s2 = {"abcd", 'a', 10, 89.3};
    printf("Name = %s \n", s2.name);
    printf("Age = %d \n", s2.age);
    printf("Pr = %f \n", s2.pr);
    printf("Grade = %c \n", s2.grade);

    struct Student sArr[5]; 
    for (int i = 0; i < 5; i++) {
        printf("Enter age for student %d : ", i + 1);
        scanf("%d", &sArr[i].age);
    }
    for (int i = 0; i < 5; i++) {
        printf("student at %d is %d years old \n", i + 1, sArr[i].age);
    }
}