#include <stdio.h>
#include <string.h>
#include "functions.h"

//ввод строки
void strout (char * str)
{
    int i;
    
    for (i = 0; i < MAX_SIZE; i++)
    {
        
        fgets (str + strlen (str), MAX_SIZE, stdin);
    }
}