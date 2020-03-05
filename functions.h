#ifndef __FUNTIONS__H__
#define __FUNCTIONS__H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct date
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
} date;

date get_date(void);

#endif