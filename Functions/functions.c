#include <stdio.h>
#include <math.h>

// The prototypes that allows you to call the function even if it's placed out of order
void add(int a, int b);
void printArray(int array[], int size);
float returnAdd(float a, float b);
float abs(float a);

int main() {
    add(1,1);

    int arr1[5] = {1,2,3,4,5};
    printArray(arr1, 5);

    // Testing return type
    printf("Printing add using return type %f\n", returnAdd(10.5, 10.2));

    float x = -40.5;
    float y = 9;
    printf("The Absolute Value of %f is %f.\n", x, abs(x));
    printf("The squareroot of %f is %f.\n", y, sqrtf(y));

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

float returnAdd(float a, float b) {
    return a + b;
}

float abs(float a) {
    if (a < 0) {
        printf("Please enter a positive number.");
        return -a;
    }
    return a;
}
