#include <stdio.h>

int main() {


    int counters[5] = {0,0,0,0,0}; // initializing to all zeros
    int integers[5] = {[4] = 3, [1]=1}; // using designated initializers to specify exact values

    printf("%d\n", integers[4]);
    printf("%d\n", integers[1]);
    printf("%d\n", integers[0]);

    return 0;
}