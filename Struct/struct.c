// the struct keyword enables you to define a collection 
// of variables of various types called a structure that you can treat as a single unit

struct date {
    int month;
    int day;
    int year;
}

// the above statement defines what the date structure looks like, there's no memory allocation

struct date purchaseDate; // this command will now allocate memory for the variables and values for each variable

// you can refer to the variable name follow by a period. 

today.day = 25;
today.year = 2015;

if (today.month == 12) {
    nextMonth = 1;
}