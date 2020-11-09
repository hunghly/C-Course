#include <stdio.h>

int main(void) {
    // when you define a variable in C, the compiler automatically allocates the correct amount of storage for you based on the data type
    // three ways to read into array
    // 1
    int array[10]; // defines a set of 10 items
    // 2
    int small_size = 10;
    int array2[small_size]; // defines a variable length array
    // 3 dynamically allocate using mem allocation
    // this allows you to allocate memory as the program is executing and as you need it.
    // This will avoid wasting memory
    // you can store data on the stack or on the heap


    /**
     * The stack holds the function arguments and local variables
     * when the execution of a function ends, the space allocated to store the arguments 
     * and local variables are freed.
     */

    /**
     * The heap is where you store the allocated memory, but it is up to you to keep track of when 
     * the memoery is no longer required
     * you must free up the space you have allocated for reuse
     */
    
}