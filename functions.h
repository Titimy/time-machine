#ifndef __FUNTIONS__H__
#define __FUNCTIONS__H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

date get_date(char *questionDisplayed);
int days_in_between(date date1, date date2);

#endif