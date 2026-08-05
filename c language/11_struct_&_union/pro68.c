#include <stdio.h>

struct semp{
    char emp_name[20];
    int emp_no;
    union uemp {
        int empsal;
    };
    
};

void main(){
    struct semp e1 ;
    union uemp u1 ;
    printf("Enter name : ");
    scanf("%s",&e1.emp_name);
    printf("Enter number : ");
    scanf("%d",&e1.emp_no);
    printf("Enter salary : ");
    scanf("%d",&u1.empsal);

    printf("NAME : %s \nEMP NO. : %d \nSALARY : %d \n",e1.emp_name,e1.emp_no,u1.empsal);
}