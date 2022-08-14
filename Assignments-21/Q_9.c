/*Write a program to store information of n students and display them using structure*/

#include <stdio.h>
#define SIZE 40

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
    int i, n;
    struct Student stu[10];

    printf("Enter no of students(max 40): ");
    scanf("%d", &n);
    printf("\nEnter %d students details:\n", n);
    for(i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter Student%d Details- ", i+1);
        printf("\nName: ");
        scanf("%[^\n]s", stu[i].name);
        printf("\nRoll No: ");
        scanf("%d", &stu[i].rollNo);
        printf("\nDate of Birth (day/month/year): ");
        scanf("%d/%d/%d", &stu[i].dob.day, &stu[i].dob.month, &stu[i].dob.year);
    }

    printf("\n\nStudents Details:\n");
    for(i=0; i<n; i++) {
        printf("\nStudent%d Details- ", i+1);
        printf("Name: %s , ", stu[i].name);       
        printf("Roll No: %d , ", stu[i].rollNo);
        printf("Date of Birth: %d-%d-%d ", stu[i].dob.day, stu[i].dob.month, stu[i].dob.year);      
    }

    return 0;
}