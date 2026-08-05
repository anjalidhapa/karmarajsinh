#include <stdio.h>

int main() {
    FILE *f; // stores address of a file

    // write 
    f = fopen("demo.txt", "w");
    fprintf(f, "Hello user from pro69.c \n");
    printf("File written done \n");

    for (int i = 1; i <= 10; i++) {
        fprintf(f, "i = %d \n", i);
    }
    fclose(f);

    // read - end of file (EOF)
    f = fopen("demo.txt", "r");

    char ch;
    while (fscanf(f, "%c", &ch) != EOF) {
        printf("%c", ch);
    }    

    fclose(f);
    return 0;
}