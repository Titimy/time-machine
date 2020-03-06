#include "functions.h"

int main(void)
{
    date init;
    int days;

    init = get_date();

    days = day_passed(init);

    printf("you've lived : %d\n", days);

    return 0;
}