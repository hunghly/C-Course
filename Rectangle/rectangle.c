#include <stdio.h>

int main() {

    double width = 0.0;
    double height = 0.0;

    printf("Please enter a width: \n");
    scanf("%lf", &width);
    printf("Please enter a height: \n");
    scanf("%lf", &height);
    printf("Your area is: %.2lf", width * height);
    return 0;
}