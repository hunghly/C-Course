struct date{
    int day;
    int month;
    int year;
} myDates[5] = {
    {11,28,2020},
    {12,25,2020},
    {12,31,2020},
    {1,1, 2021},
    {.day = 4,1,2021}
}; // sets an array of date and initializes them

struct month {
    int numOfDays;
    char name[3];
};

int main(void) {

    struct month aMonth;
    aMonth.numOfDays = 31;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    return 0;
}