#include <stdio.h>
#include <ctype.h>
#include "functions.h"


int main (int argc, char * argv [])
{
    char str [MAX_SIZE];
    argv [1] = "l";
    int i = 0;
    
    
    str_vvod (MAX_SIZE, str);
    
    if (argv [1] == "p")
        printf ("%s", str);
    if (argv [1] == "u")
        for (i = 0; i < MAX_SIZE && str [i] != '\0'; i++)
            printf ("%c", toupper (str [i]));
    if (argv [1] == "l")
        for (i = 0; i < MAX_SIZE && str [i] != '\0'; i++)
            printf ("%c", tolower (str [i]));
    
    
    return 0;
}