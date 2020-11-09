#include <stdio.h>

void square(int * const x) {
    *x *= *x;
}

int main(void) {
    int x = 5;
    square(&x);
    printf("x squared is %d\n", x);
}