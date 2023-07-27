#include <math.h>
#include "functions.h"

coordinates * circulation (polar * in_struct)
{
    coordinates * out_bufer_stuct_fi;
    coordinates out_bufer_stuct;
    
    out_bufer_stuct.x = in_struct -> mod * cos (in_struct -> a * (M_PI / 180));
    out_bufer_stuct.y = in_struct -> mod * sin (in_struct -> a * (M_PI / 180));
    
    out_bufer_stuct_fi = &out_bufer_stuct;

    return out_bufer_stuct_fi;
}