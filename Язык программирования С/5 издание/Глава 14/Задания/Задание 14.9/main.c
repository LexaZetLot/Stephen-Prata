#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main (void)
{
    struct colossus_airlines ** air_plase;
    FILE * fp;
    auto char flag_menu, flag_main_menu;
    
    
    air_plase = in_malloc (AIR, PLACE);
    fp = opne_file ();
    rewind (fp);
    if(fscanf (fp, "%s", air_plase[OK_CODE][OK_CODE].lastname) < 0)
        initializing (air_plase);
    else
        dowlnd_data_file (air_plase, fp);
    
    
    while (ONE_FLAG)
    {
        flag_main_menu = main_menu ();
        
        while (flag_main_menu == 0 || flag_main_menu == 1 || flag_main_menu == 2 || flag_main_menu == 3)
        {
            flag_menu = menu ();
            
            switch (flag_menu)
            {
                case 'a':
                    fre_plase (air_plase, flag_main_menu);
                    break;
                case 'b':
                    fre_plase_lest (air_plase, flag_main_menu);
                    break;
                case 'c':
                    sort (air_plase, flag_main_menu);
                    break;
                case 'd':
                    des_a_loc (air_plase, flag_main_menu);
                    break;
                case 'e':
                    del_a_loc (air_plase, flag_main_menu);
                    break;
                case 'f':
                    flag_main_menu = 5;
            }
        }
        
        if (flag_main_menu == 4)
        {
            save_data_file (air_plase, fp);
            exit (OK_CODE);
        }
    }
    
    arr_of (air_plase);
    fclose (fp);
    return OK_CODE;
}