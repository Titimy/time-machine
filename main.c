#include "functions.h"

int main(void)
{
    date init;
    int days;

    init = get_date();

    days = day_passed(init);

    printf("you've lived : %d days\n", days);

    return 0;
}