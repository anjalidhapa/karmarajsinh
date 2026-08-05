#include <stdio.h>

struct Emp {
    int emp_id, emp_salary;
};

void updateSalary(struct Emp *e, int newSalary) {
    // pointer obj -> *e
    e->emp_salary = newSalary;
}

void main() {
    
    struct Emp e1; // normal object
    e1.emp_salary = 1000;
    printf("Before update salary = %d \n", e1.emp_salary);

    updateSalary(&e1, 3000);

    printf("After update salary = %d \n", e1.emp_salary);
}