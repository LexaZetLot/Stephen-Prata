#include <stdio.h>
#include "functions.h"

int main (void)
{
    char *str1 = "qwerty";
    char *str2 = "rty";
    printf ("%p", string_in (str1, str2));

    return 0;
}