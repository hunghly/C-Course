#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
} myDates[5] = {
    {11, 28, 2020},
    {12, 25, 2020},
    {12, 31, 2020},
    {1, 1, 2021},
    {4, 1, 2021}};

struct time
{
    int hour;
    int minute;
    int seconds;
};

struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

// this is another way to do nested structs
struct anotherTime {
    struct Date {
        int day;
        int month;
        int year;
    } dob;

    int hour;
    int minutes;
    int seconds;
};

int main()
{
    struct dateAndTime myEvent = {{10, 31, 2020}, {1, 30, 30}};

    printf("The event is on %d/%d/%d at %d:%d:%d", myEvent.sdate.month, myEvent.sdate.day, myEvent.sdate.year, myEvent.stime.hour, myEvent.stime.minute, myEvent.stime.seconds);
}