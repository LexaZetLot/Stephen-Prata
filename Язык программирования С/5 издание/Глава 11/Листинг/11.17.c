/*compare.c -- эта программа будет работать*/

#include <stdio.h> 
#include <string.h>                                                             /*объявляет функцию strcmp ()*/

#define ANSWER "Грант"
#define МАХ 40

int main (void)
{
    
    char try [МАХ];
    
    puts ("Kтo похоронен в могиле Гранта?");
    gets (try);
    
    while (strcmp (try, ANSWER) != 0)
    {
        
        puts ("Heт, неправильно. Попытайтесь еще раз.");
        gets (try);
        
    }
    
    puts ("Teпepь правильно!");
    
    return 0; 
    
}