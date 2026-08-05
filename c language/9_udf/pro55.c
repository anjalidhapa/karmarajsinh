#include<stdio.h>
int sum(int a , int b){
    return a+b ;
}
int sub(int a , int b){
    return a-b ;
}
int mul(int a , int b){
    return a*b ;
}
int div(int a , int b){
    return a/b ;
}


void main(){
    float a,b,c;
    char s;
    printf("Enter value of a: ");
    scanf("%f",&a);

    fflush(stdin); // to empty scanf buffer memory
    printf("Enter arithmetic sign ( + | - | * | / ): ");
    scanf("%c",&s);

    printf("Enter value of b: ");
    scanf("%f",&b);
    
    if(s='+'){
        c=sum(a,b);
    }
    else if(s='-'){
        c=sub(a,b);
    }
    else if(s='*'){
        c=mul(a,b);
    }
    else if(s='/'){
        c=div(a,b);
    }

    printf("\nanswer:%f",c);
}