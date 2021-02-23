#include "functions.h"

int main(void)
{
    date date1, date2;
    int days;

    date1 = get_date("enter the first date in the following format (dd/mm/yyyy) : ");
    date2 = get_date("enter the second date in the following format (dd/mm/yyyy) : ");

    days = days_in_between(date1, date2);

    printf("the difference between the two provided dates is : %d days\n", days);

    return 0;
}