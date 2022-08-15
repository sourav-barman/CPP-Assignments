/*Create an authentication system. It should be menu driven.*/

#include <stdio.h>
#include <string.h>

#define ROW 4
#define COL 30

int isPresent(char [][COL], char [], int);

int main() {
    int i=-1, indx, signIn[ROW] = {0};
    char ch, username[ROW][COL], password[ROW][COL], user[30], pass[30];

    do {
        printf("\n******MENU******");
        printf("\n1. Sign Up \n2. Sign In \n3. Sign Out \n4. Delete User \n5. Exit");
        fflush(stdin);
        printf("\nEnter your choice: ");
        scanf("%c", &ch);

        switch(ch) {
            case '1': // Sign Up
                if (i < ROW-1) {
                    fflush(stdin);
                    printf("\nEnter Username: ");
                    scanf("%[^\n]s", user);
                    fflush(stdin);
                    printf("\nEnter Password: ");
                    scanf("%[^\n]s", pass);

                    if (isPresent(username, user, i) == -1) {
                        i++;
                        strcpy(username[i], user);
                        strcpy(password[i], pass);
                        printf("\nUser Signed Up Successfully.");
                    } else {
                        printf("\nUser already exist.");
                    }
                } else {
                    printf("\nDatabase is Full.");
                }
                break;
            case '2': // Sign In
                if (i == -1) {
                    printf("\nSign In not possible, Database is empty.");
                } else {
                    fflush(stdin);
                    printf("\nEnter Username: ");
                    scanf("%[^\n]s", user);
                    fflush(stdin);
                    printf("\nEnter Password: ");
                    scanf("%[^\n]s", pass);

                    indx = isPresent(username, user, i);
                    if (indx != -1) {
                        if (strcmp(password[indx], pass) == 0) {
                            signIn[indx] = 1;
                            printf("\nSigned In Successfully.");                            
                        } else {
                            printf("\nInvalid Password.");
                        }
                    } else {
                        printf("\nInvalid Username.");
                    }
                }
                break;
            case '3': // Sign Out
                    if (i == -1) {
                        printf("\nSign Out not possible, Database is empty.");
                    } else {
                        printf("\nEnter username: ");
                        fflush(stdin);
                        scanf("%[^\n]s", user);

                        indx = isPresent(username, user, i);
                        if (indx != -1) {
                            if (signIn[indx] == 1) {
                                signIn[indx] = 0;
                                printf("\nSign Out Successfully.");
                            } else {
                                printf("\nAlready sign out.");
                            }
                        } else {
                            printf("\nInvalid Username.");
                        }
                    }
                break;
            case '4': // Delete User
                if (i == -1) {
                    printf("\nDatabase is empty.");
                } else {
                    fflush(stdin);
                    printf("\nEnter Username: ");
                    scanf("%[^\n]s", user);
                    fflush(stdin);
                    printf("\nEnter Password: ");
                    scanf("%[^\n]s", pass);

                    indx = isPresent(username, user, i);
                    if (indx != -1) {
                        if (strcmp(password[indx], pass) == 0) {
                            i--;                            
                            printf("\nUser Deleted Successfully.");                            
                        } else {
                            printf("\nInvalid Password.");
                        }
                    } else {
                        printf("\nInvalid Username.");
                    }
                }
                break;
            case '5': // Exit
                break;

            default: 
                printf("\nInvalid Choice, try again..");
        }

    } while(ch != '5');
    
    return 0;
}

int isPresent(char username[ROW][COL], char user[], int n) {
    int i;

    for(i=0; i<=n; i++) {
        if (strcmp(username[i], user) == 0)
            return i;
    }
    return -1;
}
