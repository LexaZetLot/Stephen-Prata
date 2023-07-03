#include "functions.h"

int str_reserh (char * const str, char simvol)
{
    while (*str)
    {
        if (*str == simvol)
            return 1;
        ++(*str);
    }
    
    return 0;
}