#include <stdio.h>

int main() {
    int number = 0; // initialize int to 0
    int *pnumber = NULL; // a pointer that points to type of int
    number = 10;
    printf("number's address is %p\n", &number);
    printf("number's value is %d\n", number);
    pnumber = &number;
    printf("pnumber's address is %p\n", (void*)&pnumber); // address of the pointer pnumber
    printf("pnumber's value's address %p\n", pnumber);
    printf("size of number is %d\n", (int) sizeof(number));
    printf("size of pointer is %d\n", (int) sizeof(pnumber));
}