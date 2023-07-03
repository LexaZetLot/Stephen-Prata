#include <stdio.h>

int main(int argc, char * argv [])
{
    int i;
    argc = 3;
    argv [1] = "До";
    argv [2] = "скорого";
    argv [3] = "Свидания";
    
    
    for (i = argc; i > 0; i--)
        printf (" %s", argv [i]);

    return 0;
}
