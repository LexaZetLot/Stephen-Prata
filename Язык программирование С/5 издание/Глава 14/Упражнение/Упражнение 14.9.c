#include <stdio.h>

struct gas 
{
    float distance;
    float gals;
    float mpg;
};

void xrenp (struct gas *pt);

int main (void)
{
    struct gas willie =
    {100.0f, 10.0f,};
    
    struct gas *pt = &willie;
    
    xrenp (pt);
    
    printf ("%f", pt -> mpg);
    return 0;
}

void xrenp (struct gas *pt)
{
    pt -> mpg = pt -> distance / pt -> gals;
}