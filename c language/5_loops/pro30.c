#include<stdio.h>
void main()
{
    int a,i;
    int ans = 1;

    printf("Enter value of a:");
    scanf("%d", &a);
     
    for(i = 1; i <= a; i++) {
        ans *= i;    
    }
    printf("ans = %d \n", ans);
    
}