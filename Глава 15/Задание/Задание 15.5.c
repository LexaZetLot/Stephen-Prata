#include <stdio.h>

unsigned int rotate_1 (unsigned int x, int discharge);

int main(void)
{
    printf ("%u\n", rotate_1 (15, 1));
    
    return 0;
}

unsigned int rotate_1 (unsigned int x, int discharge)
{
    int size = 8 * sizeof (int);
    static unsigned int masck, bufer;
    
    
    for (int i = 0; i < discharge; i++, masck <<= 1)
        masck |= 01;
    masck >>= 1;
    if (discharge == 32)
        masck = 0xFFFFFFFF;
    
    bufer = x & masck;
    x <<= discharge;
    x |= bufer;
    
    return x;
}