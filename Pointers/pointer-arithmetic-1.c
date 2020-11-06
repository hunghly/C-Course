#include <stdio.h>

int main() {
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1; // get addres of num1;
    *pnum = 2L; // set num1 to 2;
    ++num2; // Increment num2
    num2 += *pnum; // Add num1 and num2 ( 1 + 2 = 3)

    pnum = &num2; // get address of num2
    ++*pnum; // increment num2 indirectly // pnum = 4

    printf("num1=%ld num2=%ld *pnum=%ld *pnum + num2=%ld \n", num1, num2, *pnum, *pnum + num2);

    return 0;

}