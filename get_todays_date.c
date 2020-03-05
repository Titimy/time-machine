#include "functions.h"

date get_todays_date(void)
{
    int month;
    int day;
    int year;
    char tmp[5];
    date this;

    tmp[0] = __DATE__[4];
    tmp[1] = __DATE__[5];
    tmp[2] = 0;

    day = atoi(tmp);

    tmp[0] = __DATE__[7];
    tmp[1] = __DATE__[8];
    tmp[2] = __DATE__[9];
    tmp[3] = __DATE__[10];
    tmp[4] = 0;

    year = atoi(tmp);

    if (__DATE__[0] == 'J' && __DATE__[1] == 'a' && __DATE__[2] == 'n')
        month = 1;

    else if (__DATE__[0] == 'F')
        month = 2;

    else if (__DATE__[0] == 'M' && __DATE__[1] == 'a' && __DATE__[2] == 'r')
        month = 3;

    else if (__DATE__[0] == 'A' && __DATE__[1] == 'p')
        month = 4;

    else if (__DATE__[0] == 'M' && __DATE__[1] == 'a' && __DATE__[2] == 'y')
        month = 5;

    else if (__DATE__[0] == 'J' && __DATE__[1] == 'u' && __DATE__[2] == 'n')
        month = 6;

    else if (__DATE__[0] == 'J' && __DATE__[1] == 'u' && __DATE__[2] == 'l')
        month = 7;

    else if (__DATE__[0] == 'A' && __DATE__[1] == 'u')
        month = 8;

    else if (__DATE__[0] == 'S')
        month = 9;

    else if (__DATE__[0] == 'O')
        month = 10;
    else if (__DATE__[0] == 'N')
        month = 11;

    else if (__DATE__[0] == 'D')
        month = 12;

    else
        month = 0;

    this.day = day;
    this.month = month;
    this.year = year;

    return this;
}