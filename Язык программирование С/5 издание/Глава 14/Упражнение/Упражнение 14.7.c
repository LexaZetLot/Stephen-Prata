#include <stdio.h>

struct name 
{
    char first [20];
    char last [20];
};

struct bem 
{
    int limbs;
    struct name title;
    char tуре [30];
};

void xrenb (const struct bem * pud);

int main (void)
{
    struct bem * рb;
    
    struct bem deb =
    {
        6,
        {"Berbnazel", "Gwolkapwolk"},
        "Arcturan"
    }; 
    
    рb = &deb;
    
   xrenb (рb);
    
    return 0;
}

void xrenb (const struct bem * рub)
{
    printf ("%s %s is a %d-limded %s", рub -> title.first, рub -> title.last, рub -> limbs, рub -> tуре);
}