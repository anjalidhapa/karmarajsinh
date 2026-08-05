#include <stdio.h>
void main()
{
    float a, b, c;
    int s; 
    printf("s = %d \n", s);

    while (s != 5)
    {
        printf("ENTER NUMBER a:");
        scanf("%f", &a);
        printf("ENTER NUMBER b:");
        scanf("%f", &b);

        printf("ENTER NUMBER FROM FOLLOWING:\n");
        printf("1 --> Additon\n");
        printf("2 --> Subtraction\n");
        printf("3 --> Multiplication\n");
        printf("4 --> division\n");
        printf("5 --> Exit\n----------------------\n");
        scanf("%d", &s);

        if (s == 1)
        {
            c = a + b;
            printf("addition of a+b=%f", c);
        }

        else if (s == 2)
        {
            c = a - b;
            printf("subtraction of a-b=%f", c);
        }
        else if (s == 3)
        {
            c = a * b;
            printf("multiplication of a*b=%f", c);
        }
        else if (s == 4)
        {
            c = a / b;
            printf("division of a/b=%f", c);
        }
        else if (s == 1)
        {
            c = a + b;
            printf("addition of a+b=%f", c);
        }
        else if (s == 5)
        {
            printf("exit ");
        }
        printf("\n");
    }
}