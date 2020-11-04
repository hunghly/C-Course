#include <stdio.h>

int main() {
    int number = 15;
    int *pointer = &number;
    int result = 0;

    // you can use the indirection operator * to access the value of the variable pointed to by the pointer, which is also referred to as the dereference operator
    result = *pointer + 15;
    printf("Your number is %d\n", *pointer);
    printf("Your result is %d\n", result);

    int count = 10, x; // declare/init count and declare x
    int *int_pointer; //declare int_pointer
    int_pointer = &count; // assign intpointer to address of count

    x = *int_pointer; // assign x the value of int_pointer
    printf("Count = %i, x= %i\n", count, x); // they should be equal

    return 0;
}