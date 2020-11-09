#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // must include <stdlib.h> to use malloc
    int *pNumber = (int*)malloc(100); // creates 100 bytes and casts it to an int pointer
    // pnumber will point to the first int location at the beginning of the 100 bytes that were allocated
    // can hold up to 25 int values on my computer, because they require 4 bytes each
    // this is an issue because it assumes our computer uses 4 bytes for ints and will NOT WORK on all cases
    // instead we should use this:
    int *pNumber2 = (int*)malloc(25*sizeof(int)); // this will generate memory for 25 int values
    // malloc returns a void pointer so you HAVE to cast
    // if the memory that you requested cannot be allocated, malloc will return NULL, you should doa  check of 
    // any dynamic memory allocated
    if (!pNumber2) {
        // do an exit if there's no memory for the storage
    }

    // memory that you allocate on the heap will be automatically released when the program ends, but it's better
    // to explicitly release the memory when we are done with it, even if it's just before the program exits

    // a memory leak occurs when you allocate memory dynamically, but do not retain the reference to it so
    // you are unable to release the memory
    // often this occurs in a loop and the program consumes more and more of the available memory on each loop iteration and may occupy it all

    // to free memory, you have to have access to the address that references the memory
    // call free to release memory;
    free(pNumber2);
    pNumber2 = NULL;

    // as long as pNumber2 contains the address that was returned when the memory was allocated, the 
    // entire memory block will be freed

    // the calloc function offers some advantages over malloc
    // calloc allocates memory and initializes the memory that is allocated so that all bytes are zero
    int *pNumber3 = (int*)calloc(75, sizeof(int)); // similar to malloc but all our ints are init to zero

    // the realloc function enables you to reuse/extend the memory that you previously allocated using malloc or calloc
    // two arguments 1. the ptr containing an address previously allocated 2. the size in bytes of the new memory
    // transfers the contents of the previous memory referenced by pointer to the newly allocated memory

    char *str;
    /* initial mem allocation */
    str = (char*) malloc(15);
    strcpy(str, "jason");
    printf("String = %s, Address = %u\n", str, str);
    /* reallocating memory */
    str = (char*)realloc(str,25);
    printf("sizeof .com is %lu\n", sizeof(".com"));
    strcat(str, ".com");
    printf("String = %s, Address = %u\n", str, str);

    free(str);
    return 0;
}