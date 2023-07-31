//mytype.c 

#include <stdio.h>

#define МУТУРЕ(X) _Generic((X),\
    int: "int",\
    float : "float", \
    double: "double", \
    default: "другой"\
    )

int main (void)
{
    int d = 5;
    
    printf ("%s\n", МУТУРЕ(d));                                                 //d имеет тип int 
    printf ("%s\n", МУТУРЕ(2.0*d));                                             //2.0* d имеет тип double
    printf ("%s\n", МУТУРЕ(3L));                                                //3L имеет тип long 
    printf ("%s\n", МУТУРЕ(&d));                                                //&d имеет тип int *

    return 0;
}