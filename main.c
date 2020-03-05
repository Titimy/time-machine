#include "functions.h"

int main(void)
{
    date init;

    init = get_date();

    system("cls");
    printf("day   : %d\n", init.day);
    printf("month : %d\n", init.month);
    printf("year  : %d\n", init.year);

    return 0;
}