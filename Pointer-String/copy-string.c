#include <stdio.h>
void copyString(char to[], char from[]);
void copyStringWithPointer(char *to, char *from);

int main() {
    char myName[] = "Hung";
    char copyName[100];
    char myName2[] = "Bobby Fisher";
    char copyName2[100];

    copyString(copyName, myName);
    copyStringWithPointer(copyName2, myName2);

    printf("the copyName is now: %s\n", copyName);
    printf("the copyName2 is now: %s\n", copyName2);
}

void copyString(char to[], char from[]) {
    int i;

    for (i = 0; from[i] != '\0'; i++) {
        to[i] = from[i];
    }

    to[i] = '\0';
}

void copyStringWithPointer(char *to, char *from) {
    // for ( ; *from != '\0'; ++from, ++to) {
    //     *to = *from;
    // }
    // *to = '\0';

    // another way to copy String

    while (*from) { //*from will exit once it reaches '\0' which is equal to false
        *to++ = *from++;
    }
    *to='\0';
}