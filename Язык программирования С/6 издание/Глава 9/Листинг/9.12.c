/*loccheck.c --  проверка для выяснения, где хранятся переменные*/ 

#include <stdio.h>

void mikado (int);                                                              /*объявление функции*/

int main (void)
{
    
    int pooh = 2, bah = 5;                                                      /*локальные для main()*/
    
    printf ("Bнyтpи main () pooh = %d и &pooh = %p\n", pooh, &pooh);
    printf ("Bнyтpи main () bah = %d и &bah = %p\n", bah, &bah);
    
    mikado (pooh);
    
    return 0; 
    
}

void mikado (int bah)                                                           /*определение функции*/
{
    
    int pooh = 10;                                                              /*локальная для mikado ()*/
    
    printf ("Bнyтpи mikado () pooh = %d и &pooh = %p\n", pooh, &pooh);
    printf ("Bнyтpи mikado () bah = %d и &bah = %p\n", bah, &bah);
    
}