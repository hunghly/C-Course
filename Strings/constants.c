#include <stdio.h>
#include "include_define.h" // importing custom header
#include <string.h>

#define TAX_RATE 0.015
#define SCHOOL_NAME "Arizona State University"

int main() {
    const char does_not_change[] = "This does not change"; // this string does not change
    printf("Tax rate is: %f\n", TAX_RATE);
    printf("School name: %s\n", SCHOOL_NAME);
    printf("Importing this string: \"%s\" from header.\n", EXPORTED_STRING);
    printf("This string declares a const string %s \n", does_not_change);

    
}