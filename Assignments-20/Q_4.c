/*Write a program in C to demonstrate how to handle the pointers in the program.*/

#include <stdio.h>

int main() {
    printf("\n\t:Pointer Usage Demonstration:\n\n");
    printf("Declaration : datatypa *pointerVariable;\n");
    printf("Initialization : pointerVariable = &regularVariable;\n");
    printf("Example-\n");
    printf("    int x = 5;\n");
    printf("    int *ptr;\n");
    printf("    ptr = &x;\n");
    printf("    printf(\"x = %%d\", x); // Output: x = 5\n");
    printf("    printf(\"x = %%d\", *ptr); // Output: x = 5\n");

    return 0;
}