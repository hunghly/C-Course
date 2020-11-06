#include <stdio.h>

int main() {
    // write a program that creates an int variable with hard coded value, assign that variable's address to a pointer variable
    // display as output the address of the pointer, the value of the porinter, and the value of what the pointer is pointing to

    int number = 25; // create an int w/ hardcoded value
    int *pnumber = &number; // assign pointer variable to address of number

    printf("the address of pointer is %p\n", (void*)&pnumber);
    printf("the value of pointer is %p\n", pnumber);
    printf("the value of what the pointer is pointing to is %d\n", *pnumber);

    // pointer has 3 values
    // the pointer's address
    // the pointer's value (which is the address of what the pointer is pointing to)
    // the pointer's target's value

    *pnumber += 25; // adds to the value pointed at by pointer
    printf("pnumber's pointed value is now %d\n", *pnumber);
    printf("number is %d\n", number);
}