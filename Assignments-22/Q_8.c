/*Write a program to demonstrate dangling pointers in C.*/

#include <stdio.h>
#include <stdlib.h>

int *func();

int main() {
    int *p1 = func();
    /* p1 is a dangling pointer because it is pointing to something which is not valid anymore. */

    int *p2 = (int *)malloc(5 * sizeof(int));
    free(p2);
    /* p2 becomes a dangling pointer because the memory it is pointing to is freed now i.e the
    pointed location is not valid anymore. */

    int *p3;
    {
        int a;
        p3 = &a;
    }
    /* p3 is a dangling pointer because the variable a is destroyed as soon as it goes out of scope*/

    return 0;
}

int *func() {
    int x = 2;

    return &x;
    /* As soon as execution of func is complete the local variable x will be destroyed.*/
}