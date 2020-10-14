#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    
    // convert lower to upper case using toupper() and tolower()
    char str[] = "some random array of chars12345!@#$D@F";
    for (int i = 0; str[i] != '\0'; i++) {
        // printf("%c", str[i]);
        str[i] = (char) toupper(str[i]);
        printf("%c", str[i]);
    }

    //stdlib.h includes declared functions that can be used to convert strings to a numerical value
    // atof(), atoi(), atol(), atoll() are all functions to be used
}