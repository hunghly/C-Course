#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_str(char dst[], char src[]);

int main()
{

    char myString[] = {"hello hung"};
    char reverseString[100];

    printf("MyString is: %s\n", myString);
    reverse_str(reverseString, myString);
    printf("The reverse string is: %s\n", reverseString);
    return 0;
}

void reverse_str(char dst[], char src[])
{
    // printf("%d", (int) strlen(src));
    int j = strlen(src) - 1;
    for (int i = 0; src[i] != '\0'; ++i)
    {

        dst[i] = src[j];
        j--;
    }
}