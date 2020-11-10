#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EMPLEN 50

struct Employee
{
    char empName[EMPLEN];
    int hireDate;
    float salary;
};

int main(void)
{
    struct Employee joe = {"joe smith", 15, 50000};
    struct Employee dylan = {"dylan bob", 10, 100000};
    struct Employee newHire;
    // Read in information for new hire
    char name[EMPLEN];
    int date;
    float salary;
    printf("Please enter your name:");
    scanf(" %s", name);
    printf("Please enter the date you were hired:");
    scanf(" %d", &date);
    printf("Please enter your salary:");
    scanf(" %f", &salary);

    strncpy(newHire.empName, name, strlen(name));
    newHire.hireDate = date;
    newHire.salary = salary;
    printf("You entered %s, %d, %f\n", newHire.empName, newHire.hireDate, newHire.salary);
}