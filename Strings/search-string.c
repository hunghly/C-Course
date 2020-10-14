#include <stdio.h>
#include <string.h>

int main() {
    // Pointers overview

    int number = 25;
    int *pNumber = &number;
    printf("number is %d\n", *pNumber);

    // using strchr
    // char str[] = "The quick brown fox";
    // char ch = 'q';
    // char *pGot_char = NULL;
    // pGot_char = strchr(str, ch);
    // printf("%s\n", pGot_char);

    char str[80] = "Hello how are you - my name is -jason";
    const char s[2] = "-";
    char *token;

    /// get the first token
    token = strtok(str, s);
    // will continue until the token is null
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
    return 0;
}