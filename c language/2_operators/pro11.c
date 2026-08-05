#include<stdio.h>
void main(){
    // int a,b ;
    // printf("enter a number:");
    // scanf("%d",&a);
    // b=a%2 ;
    // if(b==1)
    //     printf("%d is a even number",a);
    // if(b!=1)
    //     printf("%d is a odd number",a);

    /*int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 2 == 0) 
        printf("Even number ");
    
    if (num % 2 != 0) 
        printf("Odd number ");*/


    // extra -> check if 'm' is divisible by 'n'

    int m,n ;
    printf("enter value of m:");
    scanf("%d",&m);
    printf("enter value of n:");
    scanf("%d",&n);

    if (m%n==1)
        printf("m is dividible by n");
    if (m%n!=1)
        printf("m is not dividible by n");
}