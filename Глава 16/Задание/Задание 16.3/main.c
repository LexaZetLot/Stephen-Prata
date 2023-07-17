#include <stdio.h>
#include "functions.h"

int main (void)
{
    polar in_struct;
    in_struct.mod = 123.6;
    in_struct.a = 32.4;
    
    coordinates * out_stuct;
    
    out_stuct = circulation (&in_struct);
    
    printf ("Значение еоординаты X = %lf Значение координаты Y = %lf", out_stuct -> x, out_stuct -> y);
    
    return 0;
}