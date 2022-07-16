/*Program to calculate LCM of two numbers*/

#include <stdio.h> 

int main() {
    int n1, n2, max_num;

    printf("Enter two numbers n1 and n2: ");
    scanf("%d%d", &n1, &n2);

    if (n1 == 0 || n2 == 0) {
        printf("\nLCM not exist.");
    } else {
        max_num = n1 > n2 ? n1 : n2;
        while(1) {
            if (max_num % n1 == 0 && max_num % n2 == 0) {
                printf("\nLCM of %d and %d is %d", n1, n2, max_num);
                break;
            }
            max_num++;
        }       
    }

    return 0;
}