#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct date today;
    today.month = 9;
    today.day = 25;
    today.year = 2004;
    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);
    return 0;
    // pointer in structure
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct date today, *datePtr;
    datePtr = &today;
    datePtr->month = 11;
    datePtr->day = 25;
    datePtr->year = 2004;
    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);

    typedef struct
    {
        int month;
        int day;
        int year;
    } Date;
    Date today;
    today.month = 9;
    today.day = 25;
    today.year = 2004;
    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

}