/*Define a structure Employee with member variables id, name, salary*/

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp = {123, "Sourav", 85000};
    
    printf("Employee Name: %s , Id: %d , Salary: %f", emp.name, emp.id, emp.salary);

    return 0;
}
