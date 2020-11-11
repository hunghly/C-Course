#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pfile = NULL; // creates a file ptr
    char *filename = "written.txt";
    pfile = fopen(filename, "r+");
    int c; // the character when we read in
    char *str = (char *)calloc(25, sizeof(char));

    if (pfile == NULL)
    {
        printf("error opening file\n");
        return (-1);
    }
    // you can use rewind to return back to the beginning of the file to print out the contents again

    // use fgetc to read in characters from the file
    while ((c = fgetc(pfile)) != EOF)
    {
        printf("%c", c);
    }

    rewind(pfile); // rewinds the ptr to the beginning to reread the file
    printf("\n\n\n");

    // prints out the file using fgets rather than fgetc
    while (fgets(str, 25, pfile) != NULL)
    {
        printf("%s", str);
    }

    fclose(pfile);
    return 0;
}