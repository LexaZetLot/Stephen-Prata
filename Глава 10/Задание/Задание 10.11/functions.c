#include <stdio.h>
#include "functions.h"

//что то про омадки
void arr_osadci (int size, int rows, const float arr[size][rows])
{
    
    int year, month;
    float subtot, total; 
    
    printf ("ГОД КОЛИЧЕСТВО ОСАДКОВ (в дюймах)\n"); 
    
    for (year = 0, total = 0; year < YEARS; year++)
    {                   
        
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += arr[year][month];
        
        printf ("%5d%15.1f\n", 2000 + year, subtot);
        total += subtot;
    }
    
}

//что то делает
void arr_osadci1 (int size, int rows, const float arr[size][rows])
{
    int year, month;
    float subtot, total; 
    
    printf ("\n Cpeднeгoдoвoe количество осадков составляет %.1f дюймов.\n\n", total / YEARS);
    printf ("CPEДHEMECЯЧHOE КОЛИЧЕСТВО OCAДKOB:\n\n");
    printf (" Янв  Фев  Мар  Апр  Май  Июн  Июл  Авг  Сен  Окт  Ноя  Дек\n");
    
    for (month = 0; month < MONTHS; month++)
    {                                                                           
        
        for (year = 0, subtot = 0; year < YEARS ; year++)
            subtot += arr[year][month]; 
        
        printf ("%4.1f", subtot / YEARS); 
        
    }
    
    printf ("\n"); 
    
}
