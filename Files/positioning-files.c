#include <stdio.h>
#include <stdlib.h>

int main() {
    // two aspects to file positioning
    // 1. finding out where you are in the file
    // 2. moving to a given point in a file
    // you can access a file at a random position in the file

    // 1. ftell()
    // long ftell( FILE *stream );
    // returns a long int that specificies the current position in the file
    FILE *fp;
    fp = fopen("file.txt", "r+");
    if (fp == NULL) {
        fprintf(stderr, "ERROR opening file\n");
        perror("Error opening file");
        exit(1);
    }
    // int fseek( FILE *stream, long offset, int origin );
    // SEEK_SET - beginning of file
    // SEEK_CUR - current pos in the file
    // SEEK_END - end of the file
    fseek(fp, 0, SEEK_END); // this will send the position to the end of the file

    long fpos = ftell(fp); // the fpos now holds the current pos in the file.\
     the value is the offset from the beginning
    printf("%ld", fpos);


    // 2. fgetpos()
    // int fgetpos( FILE *restrict stream, fpos_t *restrict pos );
    // stores the current position and file state info, returns 0 on success and nonzero int on failure
    // the fpos_t - a type that is able to record every position within a file
    rewind(fp); // reset back to the beginning
    fpos_t position;
    fgetpos(fp, &position);
    fputs("Hello World!\n", fp);
    fclose(fp);

}