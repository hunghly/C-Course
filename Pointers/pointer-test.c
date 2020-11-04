#include <stdio.h>
#include <stddef.h>

int main() {

    int pt1 = 99;
    // int *pnumber = NULL; // pointing to NULL is equivalent to pointing to 0. It limit's future errors by initializing to NULL.
    // The declaration of the number must precede the declaration of the pointer that stores it's address
    // You cannot assign a pointer to a variable if it does not have a memory address first
    int *pnumber = &pt1;
    printf("Your pointer is %d\n", pt1);
    printf("Your type is %p\n", pnumber);
}