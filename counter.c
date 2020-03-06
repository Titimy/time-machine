#include "functions.h"

int day_passed(date init)
{
    date today = get_todays_date();
    date tmp;
    int days = 0;

    while (init.day != today.day || init.month != today.month || init.year != today.year)
    {
        days++;
        init.day++;

        if (init.month < 8)
        {
            if (init.month % 2 != 0)
            {
                if (init.day == 32)
                {
                    init.day = 1;
                    init.month++;
                }
            }

            else
            {
                if (init.month == 2 && init.year % 4 == 0)
                {
                    if (init.day == 30)
                    {
                        init.day = 1;
                        init.month++;
                    }
                }

                else if (init.month == 2 && init.year % 4 != 0)
                {
                    if (init.day == 29)
                    {
                        init.day = 1;
                        init.month++;
                    }
                }

                else
                {
                    if (init.day == 31)
                    {
                        init.day = 1;
                        init.month++;
                    }
                }
            }
        }

        else
        {
            if (init.month % 2 == 0)
            {
                if (init.day == 32)
                {
                    init.day = 1;
                    init.month++;
                }
            }
            else if (init.day == 31)
            {

                init.day = 1;
                init.month++;
            }
        }

        if (init.month == 13)
        {
            init.day = 1;
            init.month = 1;
            init.year++;
        }
    }

    return days;
}