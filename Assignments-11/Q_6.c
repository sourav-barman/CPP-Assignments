/*Write a function to print all Prime numbers between two given numbers. (TSRN)*/

#include <stdio.h>

void primeNumbers(int, int);

int main() {
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    primeNumbers(n1, n2);
    
    return 0;
}

void primeNumbers(int n1, int n2) {
    int i, j, flag, tmp, n1_cpy;
    
    if(n1 > n2) {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    n1_cpy = (n1 < 2) ? 2 : n1;
    
    printf("Prime numbers between %d & %d: ", n1, n2);
    for(i=n1_cpy; i<=n2; i++) {
        flag = 1;
        for(j=2; j<=i/2; j++) {
            if(i%j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) 
            printf("%d ", i);
    }
}