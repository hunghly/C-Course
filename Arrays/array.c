#include <stdio.h>

int main() {

    long single;
    long numbers[10];

    printf("%lu\n", sizeof(single)); // a long is size 8 or 8 bytes
    printf("%lu\n", sizeof(numbers)); // 10 longs equals 80 bytes

    int grades[10];
    int totalGrades = 10;
    long sum = 0l;
    float average = 0.0f;

    printf("\nEnter the 10 grades: ");
    for (int i = 0; i < totalGrades; i++) {
        // printf("%d", i);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    printf("Your sum is: %ld", sum);
    average = sum / totalGrades;
    printf("Your average is: %f", average);
    return 0;
}