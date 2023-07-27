#include <stdio.h>
#include "functions.h"

int set_mode (int mode)
{
    return mode;
}

void get_info (int mode)
{
    float distance;
    float fuel;
    
    if (mode == 0)
    {
        printf ("Введите пройденное расстояние в километрах: ");
        scanf ("%f", &distance);
        printf ("Введите количество израсходованного горючего в литрах: ");
        scanf ("%f", &fuel);
    }
    else 
    {
        printf ("Введите пройденное расстояние в милях: ");
        scanf ("%f", &distance);
        printf ("Введите количество израсходованного горючего в галлонах: ");
        scanf ("%f", &fuel);
    }
    
    show_info (mode, distance, fuel);
}

void show_info (int mode, float distance, float fuel)
{
    if (mode == 0)
    {
        printf ("Расход горючего составляет %.2f литров на %d км.\n", (fuel / distance) * STO, STO);
    }
    else 
    {
        printf ("Расход горючего составляет %.1f миль на один галлон.\n", distance / fuel);
    }
}