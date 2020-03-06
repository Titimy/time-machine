#include "functions.h"

int main(void)
{
    date init;
    int days;

    init = get_date();

    days = day_passed(init);

    printf("you've lived : %d days till today\n", days);

    return 0;
}