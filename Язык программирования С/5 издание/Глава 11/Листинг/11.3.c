/*p_and_s.c -- указатели и строки*/

#include <stdio.h>

int main (void) 
{
    
    const char * mesg = "Не по зволяйте себя запутать!";
    const char * сору;
    сору = mesg;
    
    printf ("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf ("copy = %s; &сору = %p; value = %p\n", сору, &сору, сору);  
    
    return 0;
    
}