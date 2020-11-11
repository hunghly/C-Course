#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// fscanf is formatted input from a file
// int fscanf( FILE *restrict stream, const char *restrict format, ... );

int main(void)
{
    char str1[10], str2[10], str3[10], str4[10];
    int year;
    FILE *fp;
    fp = fopen("file.txt", "w+");

    if (fp != NULL) {
        fputs("Hello how are you?", fp); // writes a string to a file
    }
    rewind(fp);
    fscanf(fp, "%s %s %s %d %s", str1, str2, str3, &year, str4); // reads in three strings \
    separated by spaces and in a specific format. *we have to know how the string is formatted*


    printf("Reading String1: %s\n", str1);
    printf("Reading String2: %s\n", str2);
    printf("Reading String3: %s\n", str3);
    printf("Reading Integer: %d\n", year); // this will try to read in the third value as a int
    printf("Reading String4: %s\n", str4); // this will read the next input and since there isn't one, it returns nothing
    fclose(fp);

    return 0;
}