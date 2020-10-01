#include <stdio.h>

int main() {

    int matrix[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        //{0,0,0} // this last row will automatically initialize to 0 if we leave it off.
        [3][0] = 20,
    };

    int x = 10;
    int variableLengthArray[x];

    printf("%d\n", matrix[1][1]);
    printf("%d\n", matrix[3][1]);
    printf("%d\n", matrix[3][0]);

    return 0;
}