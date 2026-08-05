#include <stdio.h>

void updateNum(int n) {
    printf("before update: n = %d \n", n);
    n = -101;
    printf("after update: n = %d \n", n);
}

void passByRef(int *np) {
    printf("before update: n = %d \n", *np);
    *np = 404;
    printf("after update: n = %d \n", *np);

}

int main() {

    int num = 10;
    updateNum(num); // pass by value
    printf("from main num = %d \n", num);
    
    passByRef(&num); // pass by ref
    printf("from main num = %d \n", num);
    return 0;
}