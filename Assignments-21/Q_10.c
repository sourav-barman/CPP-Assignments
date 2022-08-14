/*Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/

#include <stdio.h>

struct Marks {
    int rollNo;
    char name[30];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main() {
    int i;
    struct Marks stu[5];
    float percentage;

    printf("\nEnter Five students details:\n");
    for(i=0; i<5; i++) {
        fflush(stdin);
        printf("\nEnter Student%d Details- ", i+1);
        printf("\nName: ");
        scanf("%[^\n]s", stu[i].name);
        printf("\nRoll No: ");
        scanf("%d", &stu[i].rollNo);
        printf("\nMarks for Chemistry: ");
        scanf("%f", &stu[i].chem_marks);
        printf("\nMarks for Mathematics: ");
        scanf("%f", &stu[i].maths_marks);
        printf("\nMarks for Physics: ");
        scanf("%f", &stu[i].phy_marks);
    }

    printf("\nStudents Percentage Details:\n");
    for(i=0; i<5; i++) {
        percentage = (stu[i].chem_marks + stu[i].maths_marks + stu[i].phy_marks) / 300 * 100;
        printf("\n%s got %.2f percentage.", stu[i].name, percentage);
    }

    return 0;
}