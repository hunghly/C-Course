#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isOn = true;

    if (isOn) {
        printf("It's on!");
        goto bottom;
    }
    else {
        printf("It's off...");
    }
    printf("\n========================\n");

    (isOn) ? printf("It really is on") : printf("It's really not on...");

    float value1, value2;
    char operator;

    printf("\nType in your expression: ");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator) {
        case '+':
            printf("%.2f", value1 + value2);
            break;
        case '-':
            printf("%.2f", value1 - value2);
            break;
        case '/':
            printf("%.2f", value1 / value2);
            break;
        case '*':
            printf("%.2f", value1 * value2);
            break;
        default:
            printf("Unknown operator");
            break;
    }

    bottom : printf("goto..."); // You can skip the entire code if you use goto.
}