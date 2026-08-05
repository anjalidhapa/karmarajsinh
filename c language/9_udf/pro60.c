#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int num) {
    int i;
    
    // n = 10 -> 2 3 4 5 6 7 8 9
    for (i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int N ;
    // 1 2 3 4 5 6 7 ... 100
    // printf("n = 7 -> %d ", checkPrime(6));
    printf("Enter number 'N' to find prime number from 1-N : ");
    scanf("%d",&N);

    for (int i = 1; i <= N; i++) {
        if (checkPrime(i)) // checkPrime(i) == 1
            printf("%d ", i);
    }
    return 0;
}
// mingw -> boolean

// boolean -> true (1), false (0) -> stdbool.h
// bool flag = true;