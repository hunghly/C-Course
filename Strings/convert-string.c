#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // convert lower to upper case using toupper() and tolower()
    char str[] = "some random array of chars12345!@#$D@F";
    for (int i = 0; str[i] != '\0'; i++) {
        // printf("%c", str[i]);
        str[i] = (char) toupper(str[i]);
        printf("%c", str[i]);
    }
    printf("\n\n");

    //stdlib.h includes declared functions that can be used to convert strings to a numerical value
     /**
      * ASCII to...
      * atof() - double
      * atoi() - int
      * atol() - long
      * atoll() - long long
      * strtod() - double
      * STRING to...
      * strtof - float
      * strold - long double
      * are all functions to be used
      *
      * */

     double value = 0;
     char str1[] = "3.5 2.5 1.26"; // The string to be converted
     char *pstr = str1; // Pointer to the string to be converted
     char *ptr = NULL; // pointer to character position after conversion

     while (true) {
         value = strtod(pstr, &ptr); // convert starting at pstr
         if (pstr == ptr) {
             break;
         }
         else {
             printf(" %f", value); // output the resultant value
             pstr = ptr;
         }
     }
}