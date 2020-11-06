#include <stdio.h>

int main() {
    // the type name void means absence of any type
    // a pointer of type void* can contain the address of a data item of any type
    // void* is often used as a parameter type or return value type with functions that deal with data in a type-independent way
    // any kind of pointer can be passed around as a value of type void*
    // the void pointer does not know what type of object it is pointing to, so, it cannot be dereferenced directly
    // the void pointer must first be explicitly cast to another pointer type before it is dereferenced

    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr; // declare void ptr

    vptr = &i; // assign it to address of i

    printf("your void pointer address is %p\n", vptr);
    printf("The value is %d\n", *(int*)vptr);

    vptr = &f;
    printf("The value of f is %f\n", *(float*)vptr);

    vptr = &ch;
    printf("The value of ch is %c\n", *(char*)vptr);
}