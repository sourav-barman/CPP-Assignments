/*Write a program to store information of 10 students and display them using structure.*/

#include <stdio.h>

struct Student {
    char name[30];
    int rollNo;
    struct Dob {
        int day;
        int month;
        int year;
    } dob;
};
int main() {
    int i;
    struct Student stu[10];

    printf("Enter 10 students details:\n");
    for(i=0; i<10; i++) {
        printf("\nEnter Student%d Details- ", i+1);
        printf("\nName: ");
        scanf("%[^\n]s", stu[i].name);
        printf("\nRoll No: ");
        scanf("%d", &stu[i].rollNo);
        printf("\nDate of Birth (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &stu[i].dob.day, &stu[i].dob.month, &stu[i].dob.year);
        fflush(stdin);
    }

    printf("\n\nStudents Details:\n");
    for(i=0; i<10; i++) {
        printf("\nStudent%d Details- ", i+1);
        printf("Name: %s , ", stu[i].name);       
        printf("Roll No: %d , ", stu[i].rollNo);
        printf("Date of Birth: %d-%d-%d ", stu[i].dob.day, stu[i].dob.month, stu[i].dob.year);      
    }

    return 0;
}