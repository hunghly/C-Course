#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main() {

    int wxYearlyMatrix[YEARS][MONTHS]= {
        [0][0] = 2010,
        [1][0] = 2011,
        [2][0] = 2012,
        [3][0] = 2013,
        [4][0] = 2014
    };
    printf("Enter your 12 entries for 2010:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", 
    &wxYearlyMatrix[0][1],
    &wxYearlyMatrix[0][2],
    &wxYearlyMatrix[0][3],
    &wxYearlyMatrix[0][4],
    &wxYearlyMatrix[0][5],
    &wxYearlyMatrix[0][6],
    &wxYearlyMatrix[0][7],
    &wxYearlyMatrix[0][8],
    &wxYearlyMatrix[0][9],
    &wxYearlyMatrix[0][10],
    &wxYearlyMatrix[0][11],
    &wxYearlyMatrix[0][12]);

    for (int i = 1; i <= MONTHS; i++) {
        printf("\nFor %d, Month %d-Temp is %d\n", wxYearlyMatrix[0][0] , i, wxYearlyMatrix[0][i]);
    }

    return 0;
}