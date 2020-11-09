#include <stdio.h>
int getStrLength(const char* str);
int stringLength(const char* str);

int main(void) {
    char myString[] = "The quick brown fox jumped over the lazy dog.";
    char myName[] = "Hung";

    printf("The length of %s is %d\n", myString, getStrLength(myString));
    printf("The length of %s is %d\n", myName, getStrLength(myName));
    printf("The length of %s is %d\n", myString, stringLength(myString));
    printf("The length of %s is %d\n", myName, stringLength(myName));
}

// write function that calculates the length of a string
int getStrLength(const char* str) {
    int length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

int stringLength(const char* str) {
    const char *lastAddress = str;
    while (*lastAddress) { // dereference the last Address to get the value, if it's not '\0' it will keep looping
        ++lastAddress; // increment the pointer
    }
    return lastAddress - str; // eventually the ptr will be be at the end so we just subtract it from the address of str and get the length
}