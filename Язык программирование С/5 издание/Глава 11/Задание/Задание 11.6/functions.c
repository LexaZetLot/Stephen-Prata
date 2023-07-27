#include "functions.h"
#include <string.h>
#include <stdio.h>

char * str_reserh (char * str1, char * str2, int simvol)
{
    char* ptr = str1;
    
    while (*str2 && simvol--)
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    
    return ptr;
}