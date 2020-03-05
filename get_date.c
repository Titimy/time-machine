#include "functions.h"

date get_date(void)
{
    bool error;
    int day, month, year;
    date returned_date;

    do
    {
        error = false;
        printf("veillez entrer une date (jj/mm/aaaa) : ");
        scanf("%d/%d/%d", &day, &month, &year);

        if (day <= 0 || month < 0 || year < 0) // si les données sont en quelque soit négatif
            error = true;

        if (month == 2 && day == 30) // février ne peut pas dépasser 29
            error = true;

        if (year % 4 != 0 && month == 2 && day == 29) // février ne peut avoir 29 que si l'année est bisextile
            error = true;

        // les mois ne peuvent pas dépasser 30 ou 31

        if ((month % 2 == 0 && month < 8) && day >= 31)
            error = true;

        if ((month % 2 != 0 && month < 8) && day > 31)
            error = true;

        if ((month % 2 == 0 && month >= 8) && day > 31)
            error = true;

        if ((month % 2 != 0 && month >= 8) && day >= 31)
            error = true;

        /*-----------------------------------------------------------*/

        if (error)
            printf("\n  -> ERROR : veillez entrer une date valide.\n\n");

    } while (error);

    returned_date.day = day;
    returned_date.month = month;
    returned_date.year = year;

    return returned_date;
}