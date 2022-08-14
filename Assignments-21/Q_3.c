/*Write a function to getEmployeeData employee data. [ Refer structure from question 1 ]*/

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

struct Employee setEmployeeData(struct Employee);
void getEmployeeData(struct Employee);

int main() {
    struct Employee emp;

    emp = setEmployeeData(emp);
    getEmployeeData(emp);

    return 0;
}

struct Employee setEmployeeData(struct Employee emp) {
    printf("\nEnter Employee Details-\n");
    printf("Enter employee name: ");
    scanf("%[^\n]s", emp.name);
    printf("\nEnter employee Id: ");
    scanf("%d", &emp.id);
    printf("\nEnter employee salary: ");
    scanf("%f", &emp.salary);
    
    return emp;
}

void getEmployeeData(struct Employee emp) {
    printf("\nEmployee Details as follows- \n");
    printf("\nName: %s", emp.name);
    printf("\nId: %d", emp.id);
    printf("\nSalary: %f", emp.salary);
}