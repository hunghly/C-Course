#include <stdio.h>
// declare prototypes
int arraySum(int array[], const int n);


int main() {
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    int values2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("The sum of values is %i\n", arraySum(values, 10));
    printf("The sum of values2 is %i\n", arraySum(values2, 10));
}

int arraySum(int array[], const int n) {
    int sum = 0, *ptr; // declare/init sum and declare a ptr
    int *const arrayEnd = array + n; // the address of the end of the array
    printf("The value of *ptr is %d\n", *ptr);
    printf("The address of arrayEnd is %p\n", arrayEnd);

    for (ptr = array; ptr < arrayEnd; ++ptr) {
        sum += *ptr;
    }
    return sum;
}