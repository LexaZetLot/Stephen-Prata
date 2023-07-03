#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

//ввод строки
void strout (char * str)
{
    int i, j;
    
    for (i = 0; i < MAX_SIZE; i++)
    {
        
        fgets (str + strlen (str), MAX_SIZE, stdin);
        
        for (j = 0; j < strlen (str); j++)
        {
            if (isspace (str[j]) || ispunct (str[j]))
                return;
        }
    }
}