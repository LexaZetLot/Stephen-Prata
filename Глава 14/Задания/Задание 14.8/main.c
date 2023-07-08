#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main (void)
{
    struct colossus_airlines air_plase [PLACE];
    FILE * fp;
    auto char flag_menu;
    
    
    fp = opne_file ();
    if(fscanf (fp, "%s", air_plase[OK_CODE].lastname) < 0)
        initializing (air_plase);
    rewind (fp);
    
    while (ONE_FLAG)
    {
        flag_menu = menu ();
        
        switch (flag_menu)
        {
            case 'a':
                fre_plase (air_plase);
                break;
            case 'b':
                fre_plase_lest (air_plase);
                break;
            case 'c':
                sort (air_plase);
                break;
            case 'd':
                des_a_loc (air_plase);
                break;
            case 'e':
                del_a_loc (air_plase);
                break;
            case 'f':
                exit (OK_CODE);
        }
    }
    
    //printf ("Фамиля         Имя      Место Бронь\n");
    //for (int i = 0; i < 12; i++)
    //    printf ("%s * %3s * %3d * %3d\n", air_plase[i].lastname, air_plase[i].name, air_plase[i].nomber_place, air_plase[i].flag_reserv);

    return OK_CODE;
}