#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main (void)
{
    struct colossus_airlines air_plase [PLACE];
    FILE * fp;
    int i = 2234;
    
    
    fp = opne_file ();
    output_file (air_plase, fp);
    fprintf (fp, "%d", i);
    //auto int size = sizeof (struct colossus_airlines);
    //printf ("%ld", fread (&air_plase [i], size, ONE_FLAG, fp));
    //fscanf (fp, "%d", &i);
    print_file (air_plase, fp);
    
    return OK_CODE;
    
}