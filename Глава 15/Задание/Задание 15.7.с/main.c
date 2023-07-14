#include "functions.h"

int main (void)
{
    static unsigned int x = 0x20000;
    
    while (1)
    {
        print (x);
        menu_setap (&x);
    }
    
    return 0;
}