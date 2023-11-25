#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

//ввод строки
void strout (char * str, int x)
{
    fgets (str + strlen (str), MAX_SIZE, stdin);
    
    for (int i = 0; i < strlen (str); i++)
        if (isspace (str[i]) || ispunct (str[i]) || x <= i)
            str [i] = '\0';
}