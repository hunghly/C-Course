#include <stdio.h>

void add(int a, int b);
void printArray(int array[], int size);

int main() {
    add(1,1);

    int arr1[5] = {1,2,3,4,5};
    printArray(arr1, 5);
    return 0;
}

void add(int a, int b) {
    printf("%d + %d equals %d!\n", a, b, a + b);
}

void printArray(int array[], int size) {
    printf("Your array is: [");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i == size - 1) {
            printf("]\n");
            break;
        }
        printf(",");
    }
}