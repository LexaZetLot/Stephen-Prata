#include <stdio.h>
#include "functions.h"

int main (void)
{
    
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    
    copp_arr (source, target1, SIZE);
    copp_ptr (source, target2, SIZE);
    vivod (target1, SIZE);
    vivod (target2, SIZE);
    
    return 0;
    
}