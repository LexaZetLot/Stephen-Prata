#include <stdio.h>
#include <string.h>
#include "functions.h"

char* string_in (char* str1, char* str2)
{
    int i, j, flag, size, size2;
    
    size = strlen (str1);
    size2 = strlen (str2);
    
    for (i = 0, flag = 0; i < size; i++, str1++)
    {
        if (*str1 == str2[0])
        {
            for (j = 0; j < size2; j++, str1++)
                if (*str1 == str2[j])
                    flag++;
            if (size2 == flag)
                return str2;
            else
                return NULL;
        }
    }
}