/*Write a function to take input employee data from the user. [ Refer structure from
question 1 ]*/

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

struct Employee setEmployeeData(struct Employee);

int main() {
    struct Employee emp;

    emp = setEmployeeData(emp);

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