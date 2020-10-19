#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_str(char dst[], char src[]);

int main()
{

    char myString[] = {"Hello"};
    char reverseString[100];

    printf("MyString is: %s\n", myString);
    reverse_str(reverseString, myString);
    printf("The reverse string is: %s\n", reverseString);
    return 0;
}

void reverse_str(char dst[], char src[])
{
    printf("%d", (int) strlen(src));
    int j = strlen(src);
    for (int i = 0; i < strlen(src); ++i)
    {
        printf("%c", src[i]);
            printf("%d", (int) strlen(src));

        dst[i] = src[j];
        j--;
        // printf("%c", dst[i]);
    }
    // dst[strlen(src)+1] = '\0';
}