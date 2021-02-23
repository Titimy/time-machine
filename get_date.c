#include "functions.h"

bool is_even(int number)
{
    if(number % 2) return false;
    return true;
}

date get_date(char *questionDisplayed)
{
    bool error;
    date this;

    do
    {
        error = false;

        printf("%s", questionDisplayed);
        scanf("%d/%d/%d", &this.day, &this.month, &this.year);

        // si les données sont en quelque soit négatifs
        if(this.day <= 0 || this.month < 0 || this.year < 0) error = true;

        // février ne peut pas dépasser 29
        if(this.month == 2 && this.day == 30) error = true;

        // les mois ne peuvent pas dépasser 12
        if(this.month > 12) error = true;

        // février ne peut avoir 29 que si l'année est bisextile
        if(this.year % 4 != 0 && this.month == 2 && this.day == 29) error = true;


        /*******************************************
         * !les mois ne peuvent pas dépasser 30 ou 31
        ********************************************/
        if(this.month < 8)
        {
            if(is_even(this.month) && this.day >= 31) error = true;
            else if(!is_even(this.month) && this.day > 31) error = true;
        }

        else if(this.month >= 8)
        {
            if(is_even(this.month) && this.day > 31) error = true;
            else if(!is_even(this.month) && this.day >= 31) error = true;
        }
        /*-----------------------------------------------------------*/

        if(error) printf("\n  -> ERROR : please enter a valid date.\n\n");

    } while (error);

    return this;
}