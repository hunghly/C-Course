#include <stdio.h>

int main() {

    printf("The character\n \0 is used to terminate a string.");

    char my_string[10]; // indicates that there is only only 9 spaces for characters because the last char has to be a null terminator '\0'
    char word[] = {'H', 'e','l','l','o','!'};
    char word_2[] = {"hello"};
    char compiler_assigned[] = "This is assigned by the compiler";

    //my_string = "err"; // will generate an error because you can't assign strings since it's an array
    
    printf("word[] is %s\n", word);
    printf("compiler_assigned[] is %s\n", compiler_assigned);
    printf("word_2[] is %s\n", word_2);
    printf("my_string is %s\n", my_string);
    // strings are arrays so you cannot use equality operators on them
    // you would need to compare each character by character. instead use strcmp
    // 'x' is not the same as "x". "x" has both a x char and a '\0'

    int count = 0;
    while (compiler_assigned[count] != '\0')
        ++count;
    
    printf("\nThe length of the string %s is %d.\n", compiler_assigned, count);
    return 0;
}