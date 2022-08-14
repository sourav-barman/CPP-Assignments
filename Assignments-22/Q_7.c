/*Write a program to demonstrate memory leak in C.*/

#include <stdio.h>
#include <stdlib.h>

void func();

int main() {
    func();

    return 0;
}

void func() {
    int *p = (int *)malloc(5 * sizeof(int));
    /*
    Here we have allocated some memory using malloc. If we don't free this memory or return 
    a pointer to this dynamically allocated memory to the calling function, this will lead 
    to memory leak because after the termination of this function the pointer variable p will
    be deallocated automaticly but the memory allocated dynamically will still exist in memory.
    */
}