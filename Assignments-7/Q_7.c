/*Program to print all Prime numbers between two given numbers*/

#include <stdio.h>

int main() {
    int i, j, n1, n2, flag, tmp, n1_cpy;

    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

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

    return 0;
}