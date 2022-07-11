/*
Program to take marks of 5 subjects from the user. 
Assume marks are given out of 100 and passing marks is 33. 
Now display whether the candidate passed the examination or failed.
*/

#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;

    printf("\nEnter Marks for Five Subjects One by One\n");
    printf("\nEnter marks for subject 1: ");
    scanf("%f", &sub1);
    printf("\nEnter marks for subject 2: ");
    scanf("%f", &sub2);
    printf("\nEnter marks for subject 3: ");
    scanf("%f", &sub3);
    printf("\nEnter marks for subject 4: ");
    scanf("%f", &sub4);
    printf("\nEnter marks for subject 5: ");
    scanf("%f", &sub5);

    if (sub1 < 33) printf("\nThe candidate has failed in the examination.");
    else if (sub2 < 33) printf("\nThe candidate has failed in the examination.");
    else if (sub3 < 33) printf("\nThe candidate has failed in the examination.");
    else if (sub4 < 33) printf("\nThe candidate has failed in the examination.");
    else if (sub5 < 33) printf("\nThe candidate has failed in the examination.");
    else printf("\nThe candidate has passed in the examination.");

    return 0;
}