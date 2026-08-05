#include <stdio.h>
void main()
{
    float a, b, c;
    char s;
    printf("Enter value of (a):");
    scanf("%f", &a);
    printf("Enter value of (b):");
    scanf("%f", &b);

    fflush(stdin);

    printf("Enter sign (+ - * /):");
    scanf("%c", &s);

    // printf("s = asdf %c asdf \n", s);


    switch (s)
    {
    case '+':
        c = a + b;
        printf("ans:%f", c);
        break;
    case '-':
        printf("asn = %f ", a - b);
        break;
    case '*':
        printf("asn = %f ", a * b);
        break;
    case '/':
        if (b == 0) {
            printf("cant divide by zeros ");
            break;
        }
        printf("asn = %f ", a / b);
        break;
    case '%':
        printf("asn = %d ", (int)a % (int)b); 
        break;
    default:
        printf("Invalid operation ");
        break;
    }
}