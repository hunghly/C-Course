#include <stdio.h>

int main() {
    int values[100] = {5,4,3,2,1,0};

    int *valuesPtr; // you can define a pointer called valuesPtr that can be used to acces the integers contained in this array
    valuesPtr = values; // You do not need to dereference the array with & because values[] is a pointer
    // if you choose to, yu can do valuesPtr = &values[0] which does the same thing as valuesPtr = values;
    // values[i] and *(values+i) are equivalent in meaning if values is the name of an array, but values++ only works if values is a pointer
    printf("the int at position 5 is %d\n", values[5]);
    printf("the int at position 5 using pointer is %d\n", *(valuesPtr + 7));

    int i = 0;
    while (*(valuesPtr + i) != '\0') {
        printf("%d\n", *(valuesPtr + i));
        i++;
    }
    
    printf("\n--------\n");
    // this is equal to the top loop
    while (*(valuesPtr) != '\0') {
        printf("%d\n", *(valuesPtr++));
    }
}