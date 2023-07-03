#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void my_random (void)
{
    int i, _throw_, edge, bone, bufer = 0, j = 1;
    
    srand ((unsigned int) time (0));
    
    printf ("Введите количество бросаний или q для завершения программы.\n");
    while (scanf ("%d", &_throw_) == 1)
    {   if (_throw_ >= 1)
        {
            printf ("Сколько граней и сколько костей?\n");
            scanf ("%d %d", &edge, &bone);
            
            if (edge >= 2 && bone >= 1)
            {
                for (i = 0; i < _throw_; j++)
                {
                    bufer = rand () % (edge * bone + 1);
                    
                    if (bufer >= bone)
                    {   
                        printf ("%3d", bufer);
                        i++;
                    }
                    
                    if (j % 15 == 0)
                        printf ("\n");
                    
                }
            }
            else
                printf ("Введите по меьшей мере 2 гране и 1 кость\n");
        }
        else
            printf ("Введите по меьшей мере 1 бросок\n");
        
        printf ("Введите количество бросаний или q для завершения программы.\n");
    }
    
  
}