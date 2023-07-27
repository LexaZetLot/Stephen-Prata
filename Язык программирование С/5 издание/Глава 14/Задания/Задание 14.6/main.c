#include <stdio.h>
#include "functions.h"

int main (void)
{
    struct game_man * sp;
    FILE * fp;
    static int siz;
    
    fp = fopen ("game.dat", "r");
    
    siz = size (fp);
    sp = create (siz);
    
    struct_wr (fp, sp, siz);
    fclose (fp);
    
    rebuffering (sp, siz);
    
    return OK_CODE;
}