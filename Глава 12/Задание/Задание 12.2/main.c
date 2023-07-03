#include <stdio.h>
#include "functions.h"

int main (void)
{
    int mode;
    
    printf ("B вeдитe 0 для выбора метрического режима или 1 для выбора режима, принятого в США: ");
    scanf ("%d", &mode);
    
    while (mode >= 0)
    {
        set_mode (mode);
        get_info ();
        show_info ();
        
        printf ("Bвeдитe 0 для выбора метрического режима или 1 для выбора режима, приня того в США ");
        printf ("(или -1 для выхода из программы): ");
        scanf ("%d", &mode);
    }
    printf ("Пpoгpaммa завершена.\n");
    
    return 0;
    
}