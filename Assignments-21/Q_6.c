/*Write a function to sort employees according to their names [refer structure from
question 1]*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

void setEmployeeData(struct Employee *, int);
void sortByNames(struct Employee *, int);

int main() {
    int i;
    struct Employee emp[5];

    setEmployeeData(emp, 5);
    sortByNames(emp, 5);

    printf("\nEmployee details sorted according to their names:\n");
    for(i=0; i<5; i++) {
        printf("\nName: %s , Id: %d , Salary: %f", emp[i].name, emp[i].id, emp[i].salary);
    }

    return 0;
}

void setEmployeeData(struct Employee *emp, int n) {
    int i;

    printf("\nEnter %d Employee Details-\n", n);
    for(i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter employee%d name: ", i+1);
        scanf("%[^\n]s", emp[i].name);
        printf("\nEnter employee%d Id: ", i+1);
        scanf("%d", &emp[i].id);
        printf("\nEnter employee%d salary: ", i+1);
        scanf("%f", &emp[i].salary);
    }
}

void sortByNames(struct Employee *emp, int n) {
    int i, j, indx;
    struct Employee tmp;

    for(i=0; i<n-1; i++) {       
        indx = i;
        for(j=i+1; j<n; j++) {
            if (strcmp(emp[j].name, emp[indx].name) < 0) {
                indx = j;               
            }
        }
        if (indx != i) {
            tmp = emp[i];
            emp[i] = emp[indx];
            emp[indx] = tmp;
        }
    }
}