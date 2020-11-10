#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

struct intPtrs {
    int *p1;
    int *p2;
};

struct names {
    char first[20];
    char last[20];
};

struct pnames {
    char *first;
    char *last;
};

struct namect {
    char *fname;
    char *lname;
    int letters;
};

void getinfo(struct namect *pst, int SLEN);

int main(void) {

    struct date todaysDate = {10, 11, 2020}; // first create an actual date structure

    struct date *datePtr; // defining a struct pointer

    datePtr = &todaysDate; // you can assign the datePtr to todaysDate

    printf("Today's date is %d/%d/%d\n", (*datePtr).month, \
    (*datePtr).day, (*datePtr).year); // when you dereference the ptr, you have to wrap it in paras since \
                                    dot notation takes precedence

    // There's a special operator for structure of pointers by using '->' instead of (*ptr).value
    printf("Today's date printed using arrow operator is %d/%d/%d\n", \
    datePtr->month, datePtr->day, datePtr->year);

    // ===============================================
    struct intPtrs pointers; // create intPtrs struct
    int i1 = 100, i2; // create two ints

    pointers.p1 = &i1;
    pointers.p2 = &i2;

    *pointers.p2 = -97;

    printf("i1=%i, *pointers.p1=%i\n", i1, *pointers.p1);
    printf("i2=%i, *pointers.p2=%i\n", i2, *pointers.p2);
    // ===============================================

    struct names veep = {"Talia", "Summers"};
    struct pnames treas = {"Brad", "Fallingjaw"};

    printf("%s and %s\n", veep.first, treas.first);
    // The struct named veep allocates 40 bytes (20 & 20) to hold two names
    // The struct named treas holds the two addresses, but does not allocate space to store strings \
    It can be used only with strings that have space allcoated for them elsewhere such as string \
    constant or strings in arrays

    struct namect someName;
    int len;
    printf("Please enter a string length: ");
    scanf("%d", &len);
    printf("You entered %d\n", len);
    getinfo(&someName, len);
    printf("name is: %s %s\n", someName.fname, someName.lname);
}

void getinfo(struct namect *pst, int SLEN) {
    char temp[SLEN];
    printf("Please enter your first name: ");
    fgets(temp,SLEN,stdin);

    // allocate memory to hold name
    pst->fname = (char*)malloc(strlen(temp)+1);

    // copy name to allocated memory
    strcpy(pst->fname,temp);
    printf("Please enter your last name: ");
    fgets(temp,SLEN,stdin);
    pst->lname = (char*)malloc(strlen(temp)+1);
    strcpy(pst->lname, temp);
}