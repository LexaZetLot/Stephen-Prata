#include "functions.h"

bool binar_search (int * arr, int size, int search)
{
    int i = size / 2, j = 0;
    
    
    while (++j <= size)
    {
        
        if (arr [i] == search)
            return true;
        
        if (arr [i] > search)
            i -= i / 2;
        else
            i += i / 2;
        
        if (arr [i] == search)
            return true;
    }
    
    return false;
}