#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_str(char dst[], char src[]);
void str_sort();
int main()
{

    char myString[] = {"hello hung"};
    char reverseString[100];

    printf("MyString is: %s\n", myString);
    reverse_str(reverseString, myString);
    printf("The reverse string is: %s\n", reverseString);

    str_sort();
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

void str_sort() {
    int n;
    int i, j;
    char name[25][50], temp[25];

    printf("Input number of strings: ");
    scanf("%d", &n);

    printf("Input string %d: \n", n);

    for (i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }

    for (i = 1; i <= n; i++) {
        for (j = 0; j <= n - i; j++) {
            if (strcmp(name[j], name[j+1]) > 0) {
                // swap
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j+1], sizeof(name[j] -1));
                strncpy(name[j+1], temp, sizeof(name[j+1]- 1));
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }
}