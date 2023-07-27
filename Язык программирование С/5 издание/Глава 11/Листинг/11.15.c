/*join_chk.c -- объединяет две строки, сначала проверяя размер*/

#include <stdio.h>
#include <string.h>

#define SIZE 60
#define BUGSIZE 11

int main (void)
{
    
    char flower[SIZE];
    char addon[] = " пахнет как старые валенки.";
    char bug[BUGSIZE];
    int available;
    
    puts ("Kaкoй ваш любимый цветок?");
    gets (flower);
    
    if ((strlen (addon) + strlen (flower) + 1) <= SIZE)
        strcat (flower, addon); 
    
    puts (flower);
    puts ("Kaкoe ваше любимое насекомое?");
    gets (bug);
    
    available = BUGSIZE - strlen (bug) - 1;
    
    strncat (bug, addon, available);
    puts (bug);
    
    return 0; 
    
}