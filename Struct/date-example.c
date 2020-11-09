#include <stdio.h>
struct date
{
    int month;
    int day;
    int year;
} today = {.month=11, .day=9, .year=2020}; // <=== in this case we declare the today variable right after declaring the struct

// unnamed structures

struct {
    char first[100];
    char last[100];
} myName = {"Bobby", "Fisher"}; // initializing the unnamed struct

int main()
{
    // struct date today;

    // today.month = 11;
    // today.day = 9;
    // today.year = 2020;
    today = (struct date) {.month=12, .day=31, .year=2021}; // you can change the struct after creating and initializing it by doing a compound literal
    // the compound literal can appear anywhere in the program
    // it's not a declaration statement
    // the type cast operator is used to tell the compiler the type of the expression
    // the list of values follows the cast and are to be assigned to the members of the structure. in order
    // listed in the same way as if you were initializing a structure variable


    printf("Today's date is %d/%d/%.2d.\n", today.month, today.day, today.year % 100);
    printf("myName's firstN is %s, lastN is %s\n", myName.first, myName.last);
    return 0;
}