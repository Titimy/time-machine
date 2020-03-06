#include "functions.h"

int main(void)
{
    date init;
    int days;

    init = get_date();

    days = day_passed(init);

    printf("day passed is : %d\n", days);

    return 0;
}