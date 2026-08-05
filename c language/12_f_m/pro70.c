#include <stdio.h>

void main(){

FILE *f1 ,*f2 ;
    int i;
    f1 = fopen("odd.txt","w");
    for( i=1 ; i<=100 ; i++ ){
        if(i%2!=0)
            fprintf(f1,"%d\n",i);
     }
    fclose(f1);



    f2 = fopen("even.txt","w");
    for( i=1 ; i<=100 ; i++ ){
        if(i%2==0)
            fprintf(f2,"%d\n",i);
     }
    fclose(f2);

    f1=fopen("odd.txt","r");
    int odd;
    printf("-----ODD-----\n");
    while (fscanf(f1, "%d", &odd) != EOF) {
        printf("%d\n", odd);
    }    
    fclose(f1);
    
    f2=fopen("even.txt","r");
    int even;
    printf("-----EVEN-----\n");
    while (fscanf(f2, "%d", &even) != EOF) {
        printf("%d\n", even);
    }    
    fclose(f2);
}