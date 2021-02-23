#include "functions.h"

void swap_dates(date *date1, date *date2)
{
    date tmp = *date1;
    *date1 = *date2;
    *date2 = tmp;

    return;
}

void reorder_dates(date *date1, date *date2)
{
    /*******
     * years
    ********/

    if(date1->year < date2->year) return;

    if(date1->year > date2->year)
    {
        swap_dates(date1, date2);
        return;
    }

    /*********
     * months
    **********/

    if(date1->month < date2->month) return;

    if(date1->month > date2->month)
    {
        swap_dates(date1, date2);
        return;
    }

    /*******
     * days
    ********/

    if(date1->day < date2->day) return;

    if(date1->day > date2->day)
    {
        swap_dates(date1, date2);
        return;
    }

    return;
}

int days_in_between(date date1, date date2)
{
    int days = 0;

    reorder_dates(&date1, &date2);

    while (date1.day != date2.day || date1.month != date2.month || date1.year != date2.year)
    {
        days++;
        date1.day++;

        if (date1.month < 8)
        {
            if (date1.month % 2 != 0)
            {
                if (date1.day == 32)
                {
                    date1.day = 1;
                    date1.month++;
                }
            }

            else
            {
                if (date1.month == 2 && date1.year % 4 == 0)
                {
                    if (date1.day == 30)
                    {
                        date1.day = 1;
                        date1.month++;
                    }
                }

                else if (date1.month == 2 && date1.year % 4 != 0)
                {
                    if (date1.day == 29)
                    {
                        date1.day = 1;
                        date1.month++;
                    }
                }

                else
                {
                    if (date1.day == 31)
                    {
                        date1.day = 1;
                        date1.month++;
                    }
                }
            }
        }

        else
        {
            if (date1.month % 2 == 0)
            {
                if (date1.day == 32)
                {
                    date1.day = 1;
                    date1.month++;
                }
            }
            else if (date1.day == 31)
            {

                date1.day = 1;
                date1.month++;
            }
        }

        if (date1.month == 13)
        {
            date1.day = 1;
            date1.month = 1;
            date1.year++;
        }
    }

    return days;
}