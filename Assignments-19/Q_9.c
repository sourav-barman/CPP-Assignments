/*Write a program that asks the user to enter a username. If the username entered is one of 
the names in the list then the user is allowed to calculate the factorial of a number. 
Otherwise, an error message is displayed*/

#include <stdio.h>
#include <string.h>

long factorial(int n) {
    if (n==0 || n==1)
        return 1;
    return n*factorial(n-1);
}

int main() {
    int i, n, flag=0, num;
    char users[30][30], username[30];

    printf("How many users do you want(Max 30)? ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter username %d: ", i+1);
        scanf("%[^\n]", users[i]);       
    }

    printf("\nEnter the username to be searched: ");
    fflush(stdin);
    scanf("%[^\n]", username);

    for(i=0; i<n; i++) {
        if (strcmp(users[i], username) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("\nSuccessfully Logged in! ");
        printf("\nEnter an integer number to find its factorial: ");
        scanf("%d", &num);
        printf("\nFactorial of %d is %ld", num, factorial(num));
    } else {
        printf("\nInvalid Username!");
    }

    return 0;
}