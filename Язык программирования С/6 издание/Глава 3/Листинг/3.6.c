/*altnames.c - nереносимые имена для целочисленных типов*/ 

#include <stdio.h>
#include <inttypes.h>                                                           //поддерживает переносимые типы

int main (void)
{
    int32_t me32;                                                               //me32 -- это 32-битная переменная со знаком
    
    me32 = 45933945;
    printf ("Cнaчaлa предположим, что int32_t имеет тип short: ");
    printf ("me32 = %hd\n" , me32);
    printf ("Дaлee не будем делать никаких предположений.\n");
    printf ("Bмecтo этого восполь зуйтесь\"макрокомандой\" из файла inttypes.h: ");
    printf ("me32 = %" PRId32 "\n", me32); 
    
    return 0; 
}