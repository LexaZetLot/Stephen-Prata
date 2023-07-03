/*nameЗ.с -- программа считывает имена, пользуясь функцией fgets()*/

#include <stdio.h> 

#define МАХ 81

int main (void) 
{
    
    char name[МАХ];
    char * ptr;
    
    printf ("Kaк вас зовут?\n");
    ptr = fgets (name, МАХ, stdin);
    printf ("%s? А! %s!\n", name, ptr);
    
    return 0;
    
}