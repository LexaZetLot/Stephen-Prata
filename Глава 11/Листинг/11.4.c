/*name1.c -- программа считывает имя*/

#include <stdio.h>

#define МАХ 81

int main (void)
{
    
    char name[МАХ];                                                             /*выделить пространство памяти*/
    
    printf ("Kaк вас зовут?\n");
    gets (name);                                                                /*поместить строку в массив name*/
    printf ("Пpeкpacнoe имя, %s.\n", name); 
    
    return 0; 
    
}