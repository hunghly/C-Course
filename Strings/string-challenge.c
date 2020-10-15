#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// declare the function prototype
int get_length(char word[]);
void concat(char result[], const char str1[], const char str2p[]);
char concat_str(char word_1[], char word_2[]);
bool compare_str(char word_1[], char word_2[]);

int main()
{
    char randomWord[] = "Hello my name is Hung";
    char randomWord2[] = "Hello my name is what, my name is who, my name is chica chica - slim shady";
    char randomWord3[] = "Hello my name is Hung";
    // char* newString = concat_str(randomWord, randomWord2);
    char result[150];
    concat(result, randomWord, randomWord2);
    printf("\n%s\n", result);

    printf("%s count is %d\n", randomWord, get_length(randomWord));
    printf("%s count is %d\n", randomWord2, get_length(randomWord2));
    // printf("%s\n concat with %s\n is now\n %s\n", randomWord, randomWord2, &newString);
    printf("is %s equal to %s? %d\n", randomWord, randomWord3, compare_str(randomWord, randomWord3));
    return 0;
}

int get_length(char word[])
{
    int count = 0;
    for (int i = 0; word[i] != '\0'; ++i)
    {
        count++;
    }
    return count;
}

void concat(char result[], const char str1[], const char str2[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; ++j) {
        result[i+j] = str2[j];
    }
    result[i+j];
}

char concat_str(char word_1[], char word_2[]) {
    char temp_word[strlen(word_1) + strlen(word_2)];
    for (int i = 0; i < get_length(word_1); ++i) {
        temp_word[i] = word_1[i];
    }
    for (int i = 0; i < (get_length(word_1) + get_length(word_2)); ++i) {
        temp_word[get_length(word_1) + i] = word_2[i];
    }
    // printf("Sizeof word_1 is %lu\n", sizeof(&word_1));
    // printf("Sizeof word_2 is %lu\n", sizeof(&word_2));
    // printf("Length of temp_word is %lu\n", sizeof(temp_word));
    printf("temp_word is now: %s\n", temp_word);
    return *temp_word;
}

bool compare_str(char word_1[], char word_2[]) {
    bool isEqual = false;
    for (int i = 0; word_1[i] == word_2[i]; ++i) {
        if (i == get_length(word_1)) {
            isEqual = true;
        }
    }
    return isEqual;
}