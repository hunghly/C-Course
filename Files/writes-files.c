#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;

    fp = fopen("file.txt", "w+");

    if (fp != NULL)
    {
        for (ch = 33; ch < 100; ch++)
        {
            fputc(ch, fp); // writes ASCI 33 - 99 to the file
        }

        fputs("\nRandom line of text\n", fp);     // write a line of text to the file
        fputs("\nRandom line of text two\n", fp); // write a line of text to the file

        // writing a formatted output to a file
        // int fprintf( FILE *restrict stream, const char *restrict format, ... );
        fprintf(fp, "My name is: %s\n My age is: %d\n", "Hung", 300);
        fclose(fp);
    }
    return 0;
}