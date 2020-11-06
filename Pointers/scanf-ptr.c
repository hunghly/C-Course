#include <stdio.h>

int main () {
    int value = 0;

    int *pvalue = &value; // set the pointer to refer to value
    int *nullPtr = NULL; // setting to a null

    printf("Enter an integer:");
    scanf(" %d", pvalue); // Read input via the pointer

    printf("You entered %d\n", value);
    printf("The address of nullPtr is %p\n", nullPtr); // prints out 0x0
    if (nullPtr == NULL) {
        printf("nullPtr is NULL\n");
    }
    if (!nullPtr) {
        printf("This statment is also printed when nullPtr is null or zero\n");
    }
}