#include <stdio.h>

void swapByVal(int x, int y) {
    int temp;
    temp= x;
    x = y;
    y = temp;
    return;
}

void swapByRef(int *x, int *y) {
    int temp;
    temp = *x; // save the value at address x
    printf("temp is %d\n", temp);
    *x = *y; // put y into x
    printf("*x is %d\n", *x);
    *y = temp; // put temp into y
    printf("*y is %d\n", *y);
    return;
}

int main(void) {
    int x = 1;
    int y = 2;

    // int *ptrx = &x;
    // int *ptry = &y;

    printf("swapping x and y by passing by value\n");
    swapByVal(x,y); // this does nothing because we use pass by value which is local to the swap function.
    printf("x is: %d, y is %d\n", x, y);

    printf("swapping x and y by passing by reference\n");
    swapByRef(&x, &y); // this passes the address of x and y which will affect the swapping
    printf("x is: %d, y is %d\n", x, y);


}