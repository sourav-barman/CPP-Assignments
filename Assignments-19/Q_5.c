/*Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. 
Print the odd email out.*/

#include <stdio.h>

int main() {
    int i, j, n, flag;
    char strings[30][30];

    printf("How many strings do you want(Max 30)? ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter string %d: ", i+1);
        scanf("%[^\n]", strings[i]);       
    }

    printf("\nList of Odd emails that don't have '@' in it:\n");
    for(i=0; i<n; i++) {
        flag = 0;
        for(j=0; strings[i][j]; j++) {
            if (strings[i][j] == '@') {
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("\n\t%s", strings[i]);
    }

    return 0;
}