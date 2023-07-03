#include <string.h>
#include <ctype.h>
#include "functions.h"

char * del_prob (char *str)
{
    int i, j;
    
    for (i = 0; i < strlen (str); i++)
        if (isspace(str [i]))
            for (j = i; j < strlen (str); j++)
                str [j] = str [j + 1];

    return str;
}s