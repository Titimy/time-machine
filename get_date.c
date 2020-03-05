#include "functions.h"

date get_date(void)
{
    bool error, overflow;
    date this, today;

    today = get_todays_date();

    do
    {
        error = false;
        overflow = false;
        printf("veillez entrer une date (jj/mm/aaaa) : ");
        scanf("%d/%d/%d", &this.day, &this.month, &this.year);

        if (this.day <= 0 || this.month < 0 || this.year < 0) // si les données sont en quelque soit négatif
            error = true;

        if (this.month == 2 && this.day == 30) // février ne peut pas dépasser 29
            error = true;

        if (this.month > 12) // les mois ne peuvent pas dépasser 12
            error = true;

        if (this.year % 4 != 0 && this.month == 2 && this.day == 29) // février ne peut avoir 29 que si l'année est bisextile
            error = true;

        // les mois ne peuvent pas dépasser 30 ou 31

        if ((this.month % 2 == 0 && this.month < 8) && this.day >= 31)
            error = true;

        if ((this.month % 2 != 0 && this.month < 8) && this.day > 31)
            error = true;

        if ((this.month % 2 == 0 && this.month >= 8) && this.day > 31)
            error = true;

        if ((this.month % 2 != 0 && this.month >= 8) && this.day >= 31)
            error = true;

        /*-----------------------------------------------------------*/

        if (this.year > today.year)
            overflow = true;

        else if (this.year == today.year && this.month > today.month)
            overflow = true;

        else if (this.year == today.year && this.month == today.month && this.day >= today.day)
            overflow = true;

        if (error)
            printf("\n  -> ERROR : veillez entrer une date valide.\n\n");

        if (overflow)
            printf("\n  -> ERROR : veillez entrer une date passee\n\n");

    } while (error || overflow);

    return this;
}