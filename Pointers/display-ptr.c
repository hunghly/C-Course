#include <stdio.h>

int main() {
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    pnumber = &number;
    printf("pnumber's value is: %p\n", pnumber); // output the value's address
    printf("The number's address is: %p\n", &number); // output the address
    // remember the pointer itself has an address which is why this is different
    // use %p as the conversion specifier to display an address
    // use the & (address of) operator to reference the address that the pnumber variable occupies
    // the cast to void* is used to prevent a possible warning from the compiler
    // the %p specification is expecting a value to be some kind of pointer type, but the type of the &pnumber is "pointer to a pointer to int"
    printf("pnumber's address is: %p\n", (void*)&pnumber); //output the address of the pointer
}