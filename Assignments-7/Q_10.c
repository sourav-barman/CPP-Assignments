/*Program to print all Armstrong numbers under 1000*/

#include <stdio.h>
#include <math.h>

int main() {
    int i, i_cpy, digit, rem, sum;

    printf("Armstrong Numbers ubder 1000: ");
    for (i=1; i<=1000; i++) {
        i_cpy = i;
        digit = 0, sum = 0;
        while(i!=0) {
            i = i / 10;
            digit++;
        }

        i = i_cpy;
        while(i!=0) {
            rem = i % 10;
            i = i / 10;
            sum = sum + pow(rem, digit);
        }
        i = i_cpy;
        if(sum == i)
            printf("%d ", i);
    }
    
    return 0;
}