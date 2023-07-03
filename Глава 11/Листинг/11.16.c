/*nogo.c -- будет ли это работать?*/ 

#include <stdio.h>

#define ANSWER "Грант"

int main (void)
{
    
    char try[40];
    
    puts ("Kтo похоронен в могиле Гранта?");
    gets (try);
    
    while ( try != ANSWER )
    {
        
        puts ("Heт, неправильно. Попытайтесь еще раз.");
        gets (try); 
        
    }
    
    puts ("Teпepь правильно!");
    
    return 0;
    
}