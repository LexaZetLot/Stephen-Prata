/*starsrch.c -- использование функции strncmp()*/

#include <stdio.h>
#include <string.h>

#define LISTSIZE 5

int main (void) 
{
    
    const char * list[LISTSIZE] =
    {
        "astronomy", "astounding",
        "astrophysics", "ostracize",
        " asterism"
    };
    int count = 0;
    int i;
    
    for (i = 0; i < LISTSIZE; i++)
        if (strncmp (list[i], "astro", 5) == 0)
        {
            printf ("Haйдeнo: %s\n", list[i]);
            count++;
        }
    
    printf ("Cпиcoк содержит %d слов (о, а), начинающихся с astro.\n ", count);
    
    return 0; 
    
}