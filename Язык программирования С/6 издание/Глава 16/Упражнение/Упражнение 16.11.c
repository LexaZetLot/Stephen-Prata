#include <stdio.h>
#include <stdbool.h> 

#define BOOL(Х) _Generic((Х) , _Bool : "boolean", default : "not boolean")

int main (void)
{
    bool x = true;    

    printf ("%s", BOOL(x));

    return 0;
}