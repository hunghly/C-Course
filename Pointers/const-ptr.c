#include <stdio.h>

int main() {

    // with pointers we need to consider two things with the const modifier
    // 1. whether the pointer will be changed
    // 2. whether the value that the pointer points to will be changed

    // example 1 - assigning const to the pointer's value
    long value = 9999L;
    long value2 = 1000L;
    const long *pvalue = &value; // defines a pointer type to a constant

    // *pvalue = 1000L; // attempting to change the value  of *pvalue is going to give an error.
    value = 7777L; // we can still change the value of 'value'
    pvalue = &value2; // we can also change the address of the pointer
    printf("Value's address is %p\n", &value);
    printf("value2's address is %p\n", &value2);
    printf("pvalue's address is %p\n", pvalue);
    printf("your pvalue is: %ld\n", *pvalue);

    // example 2 - assigning const to the pointer's address
    long num = 9999L;
    long num2 = 1000L;
    long *const pnum = &num; // defining a constant pointer address

    // pnum = &num2; // this will generate an error because the ptr address is a constant
    *pnum = 1500L; // this is allowed to change the value but will also change the value of num

    printf("num's address is %p\n", &num);
    printf("num2's address is %p\n", &num2);
    printf("pnum's address is %p\n", pnum);
    printf("your pnum is: %ld\n", *pnum);

    // example 3 - assigning const to the value and address of pointer
    int never_changes = 100;
    const int *const never_ptr = &never_changes; // This would make the pointer fixed, but you could still change the variable of the pointed item
}