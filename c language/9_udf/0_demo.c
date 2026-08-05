#include <stdio.h>

void printHello()
{
    printf("Hello ");
    printf("cosmos\n");
}

int getSum(int num1, int num2)
{
    // printf("sum = %d ", num1 + num2);
    return num1 + num2;
}

void main()
{
    // user defined function - udf
    // printHello();
    // printHello();
    // printHello();
    // printHello();
    // printHello();

    int ans = getSum(10, 20);
    printf("ans = %d \n", ans);
    printf("sum = %d \n", getSum(10, -20));
}

// f(x) = 10x + 20
// f(40) = 10 * 40 + 20 -> 420

// return_type funName() {
//     fun code
//     fun body
// }

// return type -> int, char ... void
// fun name -> same as variable name rules
// body -> task code for the function