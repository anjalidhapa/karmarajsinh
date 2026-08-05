#include<stdio.h>
void main() {
    int a,b,c ;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    if (a>b){
        if (a>c){ 
            if (b>c) printf("a is largest number \nc is smallest number");
             else printf("a is largest number \nb is smallest number");
        }
        else if (c>a){
            if (b>a) printf("c is largest number \na is smallest number");
            else printf("c is largest number \nb is smallest number");
            }
    }        
    else if (b>a) {
        if (b>c){ 
            if (a>c) printf("b is largest number \nc is smallest number");
             else printf("b is largest number \na is smallest number");
        }
        else if (c>b){
            if (b>a) printf("c is largest number \na is smallest number");
            else printf("c is largest number \nb is smallest number");
            }
    }
        
    
}