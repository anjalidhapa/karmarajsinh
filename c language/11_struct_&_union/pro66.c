#include <stdio.h>

struct employee {
    int eno;
    int salary;
} e1;

int update(e1.eno){
    printf("Enter updated salary : ");
    scanf("%d",e1)
}

int main() {

struct employee e1 ;
printf("Enter employee no. : ");
scanf("%d",&e1.eno);
printf("Enter salary of employee : ");
scanf("%d",&e1.salary);
printf("-----Enployee Data-----\n");
printf("Employee no. : %d\n",e1.eno);
printf("salary : %d\n",e1.salary);

}