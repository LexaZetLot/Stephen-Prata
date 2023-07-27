#include "functions.h"

char * str_reserh (char * const str, char simvol)
{
    while (*str)
    {
        if (*str == simvol)
            return str;
        ++(*str);
    }
    
    
}