#include<stdio.h>
void main(){
    float salary,ta,da,hra,pf,tax ;
    printf("enter basic salary :");
    scanf("%f",&salary);
    
    
    ta=salary*2/100;
    da=salary*2/100;
    hra=salary*5/100;
    pf=salary*3/100;
    tax=salary*5/100;
    printf("TA=%f\n",ta);
    printf("DA=%f\n",da);
    printf("HRA=%f\n",hra);
    printf("PF=%f\n",pf);
    
    
    salary=salary+ta+da+hra-pf ;
    printf("Total salary=%f\n",salary);
    
    
    printf("TAX=%f\n",tax);
    salary=salary-tax ;
    printf("Net salary=%f",salary);
    
    
}
