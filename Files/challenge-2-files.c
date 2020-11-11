#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    // write a program that converts all chars of a file to uppercase and \
    write the results out a temp file, then rename the temp file to the original name \
    then remove the temporary file
    // use fgetc and fputc functions
    // use rename and remove functions
    // use islower function and sub 32 from it to get upper
    // display the contents of the original file to std output
    FILE *fp;
    FILE *tmpFP;
    int ch;

    fp = fopen("challenge2.txt", "r+");
    tmpFP = fopen("tmp.txt", "w+");
    if (fp == NULL || tmpFP == NULL)
    {
        perror("Error opening file.\n");
        exit(1);
    }

    // Loop through original file and write results to temp file
    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch) != 0)
        {
            fputc(ch - 32, tmpFP);
        }
        else
        {
            fputc(ch, tmpFP);
        }
    }

    fclose(fp);
    fclose(tmpFP);
    rename("tmp.txt", "challenge2.txt");
    remove("tmp.txt");

    // reopen the newly renamed file and print contents
    fp = fopen("challenge2.txt", "r+");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}