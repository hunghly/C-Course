#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // write a program that finds the total number of lines in a text file
    // create file w/ some text
    // open test file
    // use fgetc to parse chars until EOF - if EOF then increment counter
    // display as output the total number of lines in a file
    FILE *fp;
    int lines = 0;
    int ch;

    // open file
    fp = fopen("challenge1.txt", "r");
    if (fp == NULL)
    {
        perror("Unable to open file.\n");
        exit(1);
    }
    // loop through file and check for new lines
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
        printf("%c", ch);
    }
    fclose(fp);
    printf("Total number of lines in file: %d\n", lines);
    return 0;
}