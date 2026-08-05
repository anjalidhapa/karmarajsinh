#include<stdio.h>
void main()
{
    int a,b,c,i;
    int ans = 1;

    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter value of b:");
    scanf("%d", &b);     
    
    for( c=1 ;c<=b;c++) {
        ans *=a ;    
    }
    printf("ans = %d \n", ans);
    
}