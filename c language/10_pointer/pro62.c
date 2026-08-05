#include<stdio.h>
 
int array_max(int a[]){
    int i,max=a[0];
    for( i=1 ; i<5 ; i++ )
    {
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}


void main(){
    int i,a[5],max;
    for( i=1 ; i<6 ; i++ )
    {
        printf("Enter value of [%d] : ",i);
        scanf("%d",&a[i-1]);
    }
    max=array_max(a);
    int *p=&max;
    printf("max = %d (address = %p)",*p,p);
}