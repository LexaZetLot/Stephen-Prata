// sweetiel.c -- цикл со счетчиком

#include <stdio.h>

int main (void)
{
    const int NUМBER = 22;
    int count = 1;                                                              // инициализ ация

    while ( count <= NUМBER)                                                    // проверка 
    {
        printf ("Будьте моим другом!\n");                                       // действие
        count++;                                                                // обновление знач ения count
    }
    
    return 0; 
}