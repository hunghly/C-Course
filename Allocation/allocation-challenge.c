#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    // write program to allow user to input text string
    // the program will print the text that was inputted using dynamic memory allocation
    // use a char pointer only. no char arrays
    // user can enter the limit of the string they are entering
    // free the memory
    int maxLen;
    char *readString = NULL;
    printf("Please enter the maximum limit of the string: ");
    scanf("%d", &maxLen);
    printf("You entered %d as the limit\n", maxLen);

    readString = (char*)malloc(maxLen * sizeof(char));
    // readString = (char*)calloc(maxLen, sizeof(char)); // You could also do it this way
    if (readString) {
        printf("Enter some text: \n");
        scanf(" ");
        gets(readString);
        // fgets(readString, maxLen+1, stdin);
        printf("Your read string is [%s]\n", readString);

    }
    // free our pointers
    free(readString);
    readString = NULL;


    // fgets(readString, maxLen * sizeof(char), stdin);

}