// #include<stdio.h>
// void main(){

//     int a,m=1,i;
//     re:
//     for(i=1;i<6;i++){

//         printf("enter value for %d number ---> ");
//         scanf("%d",&a);

//         m=m*a;
        
//     }

//     if(m==0){
//         goto (re:);
//     }
//     else{
//         printf("\n%d",m);
//     }
// }

// Method 2
#include<stdio.h>
void main(){
    int i, prod = 1, num;
    
    up:
    
    for (i = 1; i <= 5; i++) {
        printf("Enter number at %d : ", i);
        scanf("%d", &num);
        
        if (num == 0) { 
                prod = 1;
                goto up;
        }
        
        prod *= num;
    }
    
    printf("product = %d \n", prod);
}