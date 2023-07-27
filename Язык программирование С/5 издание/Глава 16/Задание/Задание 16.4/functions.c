#include <stdio.h>
#include "functions.h"
#include <time.h>

int time_run (double time_bufer)
{
    static int i = 1;
    while (time_bufer > 0 && i++)
    {
        time_bufer += ((((double) clock ()) - ((double) clock ())) / CLOCKS_PER_SEC);
    }

    return i - 1;
}