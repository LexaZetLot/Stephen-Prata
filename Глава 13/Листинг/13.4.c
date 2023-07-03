/*parrot.c -- использование функций fgets () и fputs ()*/
#include <stdio.h> 

#define МAXLINE 20 

int main (void)
{
    char line [МAXLINE];
    
    while (fgets (line, МAXLINE, stdin) != NULL && line [0] != '\n')
        fputs (line , stdout);
    
    return 0;
}