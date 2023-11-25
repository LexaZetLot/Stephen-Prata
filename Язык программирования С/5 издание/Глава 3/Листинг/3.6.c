/*altnames.c - nереносимые имена для целочисленных типов*/ 

#include <stdio.h>
#include <inttypes.h>                                                           //поддерживает переносимые типы

int main (void)
{
    int16_t me16;
    me16 = 4593;

    printf ("Cнaчaлa предположим, что int16_t имеет тип short: ");
    printf ("me16 = %hd\n" , me16);
    printf ("Дaлee не будем делать никаких предположений.\n");
    printf ("Bмecтo этого восполь зуйтесь\"макрокомандой\" из файла inttypes.h: ");
    printf ("me16 = %" PRId16 "\n", me16); 
    
    return 0; 
}