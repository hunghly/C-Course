#include <stdio.h>

int main(int argc, char *argv[]) {

    int numberOfArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArgs);
    printf("Arg 1 is the program name: %s\n", argument1);
    printf("Arg 2 is the command line arg: %s\n",argument2);
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);
    return 0;
}