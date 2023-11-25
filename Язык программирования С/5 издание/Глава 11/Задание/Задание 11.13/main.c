#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{
    int i, int_chis;
    double double_chis, sum;
    argc = 3;
    argv [1] = "1.5";
    argv [2] = "3";
    
    sum = double_chis = atof (argv [1]);
    int_chis = atoi (argv [2]);
    
    for (i = 1; i < int_chis; i++)
        sum *= double_chis;
    
    printf ("%lf", sum);
    return 0;
}
