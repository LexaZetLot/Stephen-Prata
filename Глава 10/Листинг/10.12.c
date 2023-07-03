//order.c -- приоритеты операций с указателями

#include <stdio.h>

int data [2] = {100, 200};
int moredata [2] = {300, 400};

int main (void)
{
    
    int * p1, * p2, * pЗ;
    p1 = p2 = data;
    pЗ = moredata;
    
    printf ("   *p1 = %d,   *р2 = %d,   *р3 = %d\n", *p1, *p2, *pЗ);
    printf ("   *p1++ = %d,   *++p2 = %d,   (*рЗ)++ = %d\n", *p1++, *++p2, (*pЗ)++);
    printf ("   *p1 = %d,   *р2 = %d,   *р3 = %d\n", *p1, *p2, *pЗ);
    
    return 0;
    
}