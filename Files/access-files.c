// a program references a file through a file pointer or stream pointer
// a file pointer points to a struct of type FILE that represents a stream
// - contains information about the file
// - whether you want to read or write or update the file
// - the address of the buffer in memory to be used for the data
// - a pointer to the current position in the file for the next operation
// - you can set all these via input/output file operations

// if you want to use several files at the same time in a program, you need a separate file pointer for each file
// there is a limit to the number of open files you can up at one time called FOPEN_MAX in stdio.h

// open a file
// use fopen() which returns a file ptr for a specific external file
// FILE *fopen( const char *restrict filename, const char *restrict mode );
// first arg: ptr to a string that is the name of the external file (you can specify it \
explicitly, using a char pointer, or through cmd line
// second arg: specificies the mode you want to be in i.e. "r" for read, "w" for write

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "w");
    if (pfile == NULL) { // do a check if pfile cannot be opened
        printf("Failed to open %s\n", filename);
    }


    char str[50] = "hello world!\n";
    char *strPtr = str;
    while (*strPtr != '\0') {
        printf("%c", *strPtr);
        putc(*strPtr, pfile); // writing to a file using putc
        *strPtr++;
    }

    // closing a file
    fclose(pfile); // returns EOF (int) if an error occurs

    // renaming a file- you should only rename a file after closing the file
    if (rename(filename, "newfile.txt") == 0) {
        printf("name change worked\n");
    }
    else {
        printf("name change failed\n");
    }

    // removing a file
    if (remove("remove.txt") == 0) {
        printf("remove.txt was removed.\n");
    }
}