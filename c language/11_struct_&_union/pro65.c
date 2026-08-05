#include <stdio.h>

struct employee {
    int eno;
    char name[20];
    int salary;
};

int main() {

struct employee e1 ;
printf("Enter employee no. : ");
scanf("%d",&e1.eno);
printf("Enter name of employee : ");
scanf("%s",&e1.name);
printf("Enter salary of employee : ");
scanf("%d",&e1.salary);
printf("-----Enployee Data-----\n");
printf("Employee no. : %d\n",e1.eno);
printf("Name : %s\n",e1.name);
printf("salary : %d\n",e1.salary);

}