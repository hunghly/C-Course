#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // write a program that will print the contents of a file in reverse order
    // use fseek to seek to the end of the file
    // use ftell to get the position
    // display the output in reverse order

    FILE *fp = NULL;
    long pos;

    fp = fopen("challenge3.txt", "r+");
    if (fp == NULL) {
        perror("Error opening file.\n");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    printf("Your current end position is: %ld\n", pos);
    for (long i = 1; i <= pos; i++) {
        fseek(fp, -i,SEEK_END);
        printf("%c", fgetc(fp));
    }
    fclose(fp);
    return 0;
}