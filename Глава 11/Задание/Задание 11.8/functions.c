#include <stdio.h>
#include <string.h>
#include "functions.h"

char* revers (char * str)
{
    int i, len = 0, n;
    char temp;
    
    len = strlen(str);
    n = len - 1;
    
    for(i = 0; i <= ( len / 2 ); i++, n--)
    {
      temp = str [i];
      str [i] = str [n];
      str [n] = temp;
    }
    
    return str;
}