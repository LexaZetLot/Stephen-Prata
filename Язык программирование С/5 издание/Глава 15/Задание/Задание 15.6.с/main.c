#include "functions.h"

int main (void)
{
    struct font_settings setap = {0, 0, 0, 0, 0, 0};
    
    while (1)
    {
        menu (setap);
        menu_setap (&setap);
    }
    
    return 0;
}