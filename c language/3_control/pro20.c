#include<stdio.h>
void main(){
    float income,net,tax;
    printf("Enter annual income:");
    scanf("%f",&income);

    if (income<=100000) {
        tax=0;
        net=income-income*(tax/100);
        printf("net income:%f",net);
        printf("tax:%f",tax);
    }
     else if 
        (income>100000||income<=150000) {tax=10;
         net=income-income*(tax/100);
         printf("Net income:%f",net);
         printf("\nTax:%f",tax);

     }
     else if 
        (income>150000||income<=200000) {tax=15;
         net=income-income*(tax/100);
        printf("net income:%f",net);
        printf("tax:%f",tax);

     }
     else if 
        (income>200000||income<=250000) {
         tax=20;
         net=income-income*(tax/100);
         printf("net income:%f",net);
         printf("tax:%f",tax);

     }
     else if 
        (income>250000) { tax=25;
        net=income-income*(tax/100);
        printf("net income:%f",net);
        printf("tax:%f",tax);
     }
}