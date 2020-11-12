/**
 * @file various.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-12
 * 
 * @copyright Copyright (c) 2020
 * 
 * 
 * char *strcat(s1,s2) - concats the char strings s2 to s1
 * char *strchr(s,c) - searches the string s for the first occurence of the char c. if found, a ptr to the ch is returned, otherwise null ptr.
 * int strcmp(s1,s2) - compares two strings and returns value < 0 if s1 less than s2, 0 if equal, > 0 if greater than s2
 * char *strncat(s1,s2,n) - concat w/ n chars
 * int strncmp(s1,s2,n) - same w/ n chars
 * char *strrchr(s, c) - search string s for last occurence of c.
 * char *strstr(s1,s2) - searches s1 for first occurence of s2
 * char *strtok(s1,s2) - breaks s1 into tokens based on delimiter chars in s2
 * 
 * 
 * int fgetc(fp) = gets next char
 * int fgetpos(fp, fpos) - gets current position and store into fpos_t
 * 
 * 
 * 
 * MATH FUNCTIONS
 * <math.h>
 * double acosh(x)
 * double asin(x)
 * double atan(x)
 * double log(x)
 * double floor(x)
 * double pow(x,y)
 * double nan(s)
 * double round(x)
 * 
 * UTILITY FUNCTIONS
 * <stdlib.h>
 * int abs(n)
 * void exit(n)
 * void exit(n) - terminates program execution. closing open files and returning exit status
 * char *getenv(s) - returns ptr to the environment variable
 * void qsort(arr, n, size, comp_fn) - sorts the data array pointed to by the void ptr arr
 * int rand(void) - generate random number 
 * void srand(seed) - seeds the random number generator
 * int system(s) - gives the command contained in the char array pointed to by s. and runs a system command
 * 
 * 
 * ASSERT 
 * <assert.h>
 * consists of a macro called assert()
 * takes an argument as an int expression - if it evaluates to false (nonzero) the assert writes \
 * an error message to stderr and calls abort function to terminate program
 * 
 * TIME
 * <time.h>
 * - macros and functions for date and time ops
 * 
 * ERRORS
 * <errno.h> - defines macros for reporting errors
 * 
 * LOCALE
 * <locale.h> - defines functions and macros to assist with formatting data as monetary units for diff countries
 * 
 * SIGNAL
 * <signal.h> - defines facilities for dealing with conditions that arise during program execution, including error conditions
 * 
 * STDARG
 * <stdarg.h> - defines facilities that enable a variable number of arguments to be passed to a function
 */

#include <assert.h>

int main(void) {
    int x = 10;
    int y = x - 11;
    assert(y > 0);
}