#include <stdio.h>

void fun_srv (double * a, double * b, double * c);

int main (int p)
{
    double a = 1.3, b = 4.0, c = 3.1;
    fun_srv (&a, &b, &c);
    
    printf ("%lf, %lf, %lf", a, b, c);
    
    return 0;
}

void fun_srv (double * a, double * b, double * c)
{
    double max = *a, min, sr;
    
    if (*a > *b && *a > *c)
    {
        if (*b >*c)
        {
            sr = *b; 
            min = *c;
        }
        else
        {
            sr = *c;
            min = *b;
        }
        if (*a >= max)
            max = *a;
    }
    
    if (*b > *a > 0 && *b > *c)
    {
        if (*a > *c) 
        {
            sr = *a; 
            min = *c; 
        }
        else 
        {
            sr = *c; 
            min = *a;
        }
        if (*b >= max)
            max = *b;
    }
    
    if (*c > *a && *c > *b)
    {
        if (*a > *b) 
        {
            sr = *a; 
            min = *b;
        }
        else 
        {
            sr = *b; 
            min = *a;
        }
        if (*c >= max)
            max = *c;
    }
    *a = max;
    *b = sr;
    *c = min;
}