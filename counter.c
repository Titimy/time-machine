#include "functions.h"

int day_passed(date init)
{
    date today = get_todays_date();
    date tmp;
    int days = 0;

    tmp = init;

    while (tmp.day != today.day || tmp.month != today.month || tmp.year != today.year)
    {
        days++;
        tmp.day++;

        if (tmp.month < 8)
        {
            if (tmp.month % 2 != 0)
            {
                if (tmp.day == 32)
                {
                    tmp.day = 1;
                    tmp.month++;
                }
            }

            else
            {
                if (tmp.month == 2 && tmp.year % 4 == 0)
                {
                    if (tmp.day == 30)
                    {
                        tmp.day = 1;
                        tmp.month++;
                    }
                }

                else if (tmp.month == 2 && tmp.year % 4 != 0)
                {
                    if (tmp.day == 29)
                    {
                        tmp.day = 1;
                        tmp.month++;
                    }
                }

                else
                {
                    if (tmp.day == 31)
                    {
                        tmp.day = 1;
                        tmp.month++;
                    }
                }
            }
        }

        else
        {
            if (tmp.month % 2 == 0)
            {
                if (tmp.day == 32)
                {
                    tmp.day = 1;
                    tmp.month++;
                }
            }
            else if (tmp.day == 31)
            {

                tmp.day = 1;
                tmp.month++;
            }
        }

        if (tmp.month == 13)
        {
            tmp.day = 1;
            tmp.month = 1;
            tmp.year++;
        }
    }

    return days;
}