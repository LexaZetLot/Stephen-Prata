#include <stdio.h>
#include "functions.h"

static float new_mode;
static float distance;
static float fuel;

void set_mode (int mode)
{
    new_mode = mode;
}

void get_info (void)
{
    if (new_mode == 0)
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
}

void show_info (void)
{
    if (new_mode == 0)
    {
        printf ("Расход горючего составляет %.2f литров на %d км.\n", (fuel / distance) * STO, STO);
    }
    else 
    {
        printf ("Расход горючего составляет %.1f миль на один галлон.\n", distance / fuel);
    }
}