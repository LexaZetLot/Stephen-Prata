#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

void * opne_file ()
{
    FILE * fp_bufer;
                            
    if ((fp_bufer = fopen ("Colossus_Airlines.dat", "r + b")) == NULL) 
    {
        fputs ("He удается открыть файл Colossus_Airlines.dat\n", stderr);
        exit (ONE_FLAG);
    }
    
    rewind (fp_bufer);
    
    return fp_bufer;
}

void output_file (struct colossus_airlines * air_plase, FILE * fp)
{
    auto int size = sizeof (struct colossus_airlines);
    
    for (int i = 0; i < PLACE && fscanf (fp, "%s", air_plase[i].lastname) != 0; i++)
    {
        puts ("Введите имя");
        fscanf (fp, "%s", air_plase[i].lastname);
        puts ("Место");
        fscanf (fp, "%d", &air_plase[i].nomber_place);
        
    }
    
    fwrite (&air_plase [0], size, 12, fp);
}


void print_file (struct colossus_airlines * air_plase, FILE * fp)
{rewind (fp);
    auto int size = sizeof (struct colossus_airlines);
    
    for (int i = 0; i < PLACE && fread (&air_plase [i], size, ONE_FLAG, fp) == ONE_FLAG; i++)
    {
        
        if (i == 0)
            puts ("Текущее содержимое базы данных Colossus_Airlines.dat: ");
        
        if (air_plase[i].flag_reserv == false)
            printf ("%s %s %d\n", air_plase[i].lastname, air_plase[i].name, air_plase[i].nomber_place);
        else if (air_plase[i].flag_reserv == true)
            printf ("%s %s %s\n", "ожидает заполнения", "ожидает заполнения", "ожидает заполнения");
        else 
            printf ("%s %s %s\n", "свободно", "свободно", "свободно");
    }
}