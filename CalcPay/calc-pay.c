#include <stdio.h>

int main(int argc, char *argv[]) {

    // Basic pay rate 12/hr
    // Overtime is 1.5 after 40 hrs
    // tax rate is 15% first 300, then 20% next 150, then 25% the rest
    printf("%s\n", argv[0]);
    
    int totalHours;
    float hourlyRate = 12.00;
    float totalPay;
    printf("Please enter your total hours worked. You make $%.2f an hour and earn 1.5 base pay for overtime: ", hourlyRate);
    scanf("%d", &totalHours);
    if (totalHours <= 40) {
        totalPay = totalHours * hourlyRate;
        printf("You entered %d hours.\nYour total pay is %.2f.\n", totalHours, totalPay);
    } else if (totalHours > 40) {
        totalPay = (40 * hourlyRate) + ((totalHours - 40) * hourlyRate * 1.5);
        printf("You entered %d hours.\nYour total pay is %.2f.\n", totalHours, totalPay);
    }

    printf("\n====================\n");
    printf("\n====================\n");
    printf("\nLet's check how much taxes will take out.\n");
    printf("\nThe first $300 is taxed at 15%%, The next $150 is 20%%, and the remaining is 25%%\n");

    if (totalPay <= 300) {
        totalPay *= .85;
    } else if (totalPay > 300 && totalPay <= 450) {
        totalPay = (300 * .85) + ((totalPay - 300) * .8);
    } else {
        totalPay = (300 * .85) + (150 * .8) + ((totalPay - 450) * .75);
    }

    printf("Your final pay after taxes is: %.2f ", totalPay);


    return 0;
}