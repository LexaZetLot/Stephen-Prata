#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main (void)
{
    struct colossus_airlines air_plase [PLACE];
    FILE * fp;
    auto char flag_menu;
    
    
    
    fp =  fopen ("Colossus_Airlines.dat", "r + b");//= opne_file ();
    rewind (fp);
    if(fscanf (fp, "%s", air_plase[OK_CODE].lastname) < 0)
        initializing (air_plase);
    else
        dowlnd_data_file (air_plase, fp);
    
    
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
                save_data_file (air_plase, fp);
                exit (OK_CODE);
        }
    }
    fclose (fp);
    return OK_CODE;
}