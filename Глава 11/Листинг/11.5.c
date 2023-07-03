/*name2.c -- программа считывает имя*/

#include <stdio.h>

#define МАХ 81

int main (void)
{
    
    char name[МАХ];
    char * ptr;
    
    printf ("Kaк вас зовут?\n");
    ptr = gets (name);
    printf ("%s? А! %s!\n", name, ptr);
    
    return 0; 
    
}