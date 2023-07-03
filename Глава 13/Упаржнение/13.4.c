#include <stdio.h>

int main (void)
{
    static double bufer, sum;
    static int i;
    
    while (fscanf (stdin, "%lf", &bufer) == 1)
    {
        sum += bufer;
        i++;
    }
    
    fprintf (stdout, "%.2lf", sum / i);
    
    return 0;
}