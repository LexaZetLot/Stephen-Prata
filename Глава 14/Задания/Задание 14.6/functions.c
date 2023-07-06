#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int size (FILE * fp)
{
    auto int flag = START_ONE; 
    auto char ch;
    
    while ((ch = getc (fp)) != EOF)
        if (ch == '\n')
            flag++;
    
    fseek (fp, 0L, SEEK_SET);
    
    return flag;
}

struct game_man * create (int siz)
{
    struct game_man * struct_buf;
    
    struct_buf = malloc (sizeof (struct game_man) * siz);
    
    return struct_buf;
}

void struct_wr (FILE * fp, struct game_man * sp, int siz)
{
    for (int i = START_INTERACTION; i < siz; i++)
        fscanf (fp, "%d %s %s %d %d %d %d", &sp[i].number, sp[i].name, sp[i].lastname, &sp[i].took_the_ball, 
        &sp[i].kick, &sp[i].pass, &sp[i].run);
}

void rebuffering (struct game_man * sp, int siz)
{
    static int flag_reductions = 1;
    struct game_man buder;
    int line = siz, j, k;
    
    for (int i = START_INTERACTION; i < siz; i++)
    {
        for (int j = i + 1; j < siz; j++)
        {    
  
            if (strcmp (sp[i].name, sp[j].name) == 0 || strcmp (sp[i].lastname, sp[j].lastname) == 0 || (sp[i].number == sp[j].number))
            {
                sp[i].took_the_ball += sp[j].took_the_ball;
                sp[i].kick += sp[j].kick;
                sp[i].pass += sp[j].pass;
                sp[i].run += sp[j].run;
                
                for (k = j; k  < siz; k++)
                    sp [k] = sp [k + 1];
                
                line -= flag_reductions;
            }
               
        }   
        
    }
    for (int i = 0; i < siz; i++)
        if (sp[i].name[0] != '\0' && sp[i].lastname[0] != '\0')
            printf ("%d %s %s %d %d %d %d\n", sp[i].number, sp[i].name, sp[i].lastname, sp[i].took_the_ball, 
                    sp[i].kick, sp[i].pass, sp[i].run);
    
}