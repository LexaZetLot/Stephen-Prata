#include <stdio.h>
#include <ctype.h>
#include "functions.h"

int main (void)
{
    char str [MAX_SIZE];
    int i, flag_word = 0, flag_lower = 0, flag_biger = 0, flag_punct = 0;
    
    str_vvod (MAX_SIZE, str);
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isspace (str[i]))
            flag_word++;
        
        if (islower (str[i]))
            flag_lower++;
        
        if (!islower (str[i]))
            flag_biger++;
        
        if (ispunct (str[i]))
            flag_punct++;
        
    }

    return 0;
}