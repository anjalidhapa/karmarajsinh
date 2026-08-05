#include <stdio.h>
int main(){

    FILE *f;
    
    f=fopen("69.txt","w");
    fprintf(f,"NIGHT sky");
    fclose(f);
    
    f=fopen("69.txt","r");
    char ch;
    while (fscanf(f, "%c", &ch) != EOF) {
        printf("%c", ch);
    }    
    fclose(f);
return 0;
}