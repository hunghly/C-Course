#include <stdio.h>

int main () {

    int minutes;
    float days;
    float years;
    printf("Please enter how many minutes you want to convert: ");
    scanf("%d", &minutes);

    days = (float) minutes / 60 / 24;
    years = (float) minutes / 60 / 24 / 365;

    printf("You entered %d minutes, which converts to %.3f days or %.3f years!\n", minutes, days, years);

    return 0;
}