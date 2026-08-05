#include <stdio.h>

union UnionSize { 
    int number;
    char c;
    float a;
};

void main(){
    union UnionSize s1 ;
    union UnionSize *up = &s1;
    printf("size of int=%d \n", sizeof(s1.number));
    printf("size of int=%d \n", sizeof(s1.c));
    printf("size of int=%d \n", sizeof(s1.a));

    // access values using pointer obj
    up->a = 1.3;
    printf("up->a = %f \n", up->a);
    up->c = 'a';
    printf("up->c = %c \n", up->c);
    up->number = 1032;
    printf("up->number = %d \n", up->number);
}