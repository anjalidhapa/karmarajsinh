#include <stdio.h>

void main(){
    int a,b,c;
    printf("-------SUM-------\n");
    printf("Enter value of 'a' : ");
    scanf("%d",&a);
    printf("Enter value of 'b' : ");
    scanf("%d",&b);

    int *pointer1=&a,*pointer2=&b,*pointer3=&c;
   
    *pointer3=*pointer1+*pointer2;
    printf("a=%d (address=%p) ; b=%d (address=%p)\n",*pointer1,pointer1,*pointer2,pointer2);
    printf("sum = %d (address = %p)",*pointer3,pointer3);

}