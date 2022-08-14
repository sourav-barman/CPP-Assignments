/*Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

void setEmployeeData(struct Employee *, int);
void findHighestSalaryEmployee(struct Employee *, int);

int main() {
    int i;
    struct Employee emp[10];

    setEmployeeData(emp, 10);

    findHighestSalaryEmployee(emp, 10);

    return 0;
}

void setEmployeeData(struct Employee *emp, int n) {
    int i;

    printf("\nEnter %d Employee Details-\n", n);
    for(i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter employee name: ");
        scanf("%[^\n]s", emp[i].name);
        printf("\nEnter employee Id: ");
        scanf("%d", &emp[i].id);
        printf("\nEnter employee salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void findHighestSalaryEmployee(struct Employee *emp, int n) {
    int i;
    struct Employee tmp;

    tmp = emp[0];
    for(i=1; i<n; i++) {
        if (emp[i].salary > tmp.salary)
            tmp = emp[i];
    }

    printf("\nDetails of highest salary employee:\n");
    printf("\nName: %s", tmp.name);
    printf("\nId: %d", tmp.id);
    printf("\nSalary: %f", tmp.salary);
}