/* compare .c - - эта прогр амма будет р або тать */

#include <stdio.h>
#include <string.h> 
#include <ctype.h>

#define ANSWER "GRANT"
#define MAX 40

void ToUpper (char * str);

int main (void)
{
    char try [MAX];
    
    puts ("Kтo похоронен в могиле Гранта?");
    gets (try) ;
    ToUpper (try);

    while (strcmp (try, ANSWER) != 0)
    {
        puts ("Heт, неправильно. Попытайтесь еще раз.");
        gets (try);
        ToUpper (try);
        
    }
    puts ("Teпepь правильно!");
    return 0;
}

void ToUpper ( char * str)
{
    while (*str)
    {
        *str = toupper (*str);
        *str++;
        
    }
    
}