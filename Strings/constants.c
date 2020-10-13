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

    // String functions strlen, strcpy, strncpy, strcat, strncat, strcmp, strncmp
    printf("Length of string is %d\n", strlen(does_not_change));
    // Creating a copy using strcpy
    char copy_str[100];
    char copyn_str[10];
    strcpy(copy_str, does_not_change);
    printf("new string after copy %s\n", copy_str);
    // strncpy(copyn_str, does_not_change, 10); // will copy the first 10 chars
    strncpy(copyn_str, does_not_change, sizeof(copyn_str) - 1); // this line of code copys everything that it can from does_not_change and prevent buffer overflow
    printf("copyn_str is now the string: %s - using strncpy and passing in the number 10\n", copyn_str);

    /* String concat */
    char hello[100] = "Hello ";
    char name[100];
    printf("\nPlease enter something your name: ");
    scanf("%s", name);
    printf("%s", strcat(hello, name));
    printf("%s", hello);
}