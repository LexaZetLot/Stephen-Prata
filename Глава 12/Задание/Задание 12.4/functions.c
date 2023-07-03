#include <stdio.h>
#include "functions.h"

static int point;

void score (void)
{
    point++;
    printf ("выполняется %d интерация\n", point);
}