#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp = NULL;
    fp = fopen("file.txt", "r+");
    if (fp == NULL) {
        perror("Error opening file\n");
        exit(1);
    }
    fputs("This is Hung", fp);

    fseek(fp, 7, SEEK_SET);
    fputs("Hello how are you", fp);
    fclose(fp);


    return 0;
}