#include <stdio.h>
#include <stdbool.h> // you can use bool now instead of _Bool


enum primaryColor {red, yellow, blue};


const char* getPrimaryColor(enum primaryColor color) {

    switch (color) {
        case red: return "red";
        case blue: return "blue";
        case yellow: return "yellow";
    }
}


int main()
{

    /* 
     * Data Types
     * int
     * float
     * double
     * char
     * _Bool
     *  */

    // Assigning a HEX to int
    int rgbColor = 0xFFFFFF; // white

    _Bool isRight = 1;
    printf("%d\n", isRight);
    if (isRight)
    {
        printf("You got it!\n");
    }

    bool myBool = true;
    if (myBool) {
        printf("myBool is true\n");
    }

    /*
     * Special int types
     * short, long, unsigned 
     * */

    long bigNumber = 123456789101112;
    printf("%ld\n", bigNumber);


    /* Enums - a datatype that allows a programmer to define a variable and specify the valid values that could be stored into that variable*/

    enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};


    enum primaryColor color = blue;
    enum month thisMonth = Sep;

    printf("%d\n", color);
    printf("%s\n", getPrimaryColor(color));
    printf("%d\n", thisMonth);

    return 0;
}
