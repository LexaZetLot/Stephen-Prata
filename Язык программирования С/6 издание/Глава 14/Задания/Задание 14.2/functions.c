#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

struct maunt 
{
    char name_mount [MAX_SIZE_MOUNTH];
    char abb_mount [MAX_SIZE_ADD_MOUNTH];
    int day;
    int nomber;
};

struct maunt maunts [MONTHS] = 
{
    {"Январь", "янв", 31, 1},
    {"Февраль", "фев", 28, 2},
    {"Март", "мар", 30, 3},
    {"Апрель", "апр", 31, 4},
    {"Май", "май", 30, 5},
    {"Июнь", "июн", 31, 6},
    {"Июль", "июл", 30, 7},
    {"Август", "авг", 31, 8},
    {"Сентябрь", "сен", 30, 9},
    {"Октябрь", "окт", 31, 10},
    {"Ноябрь", "ноя", 30, 11},
    {"Декабрь", "дек", 31, 12}
};

int days_have_passed (int days, char * month)
{
    int to_mount = 0, sum = 0;
    char ch [3];
    
    if (fflag_num (month) || fflag_null (month))
    {
        to_mount = atoi (month);
        
        for (int i = 0; i <  to_mount - 1; i++)
            sum += maunts [i].day;
    }
    
    if(1) 
    {   printf ("***");
        for (int i = 0; i < 3; i++)
            ch [i] =  month [i];
        printf ("***");
        for (int i = 0; strcmp (maunts [i].name_mount, month); i++)
            to_mount++;
        
        for (int i = 0; strcmp (maunts [i].abb_mount, ch); i++)
            to_mount++;
       
        printf ("%d", to_mount);
        
        for (int i = 0; i < to_mount; i++)
        {
            sum += maunts [i].day;
            printf ("%d\n", sum);
        }
    }
    
    
    
    return sum + days;
}

int fflag_num (char * month)
{
    if (!isalpha (month [FIRST_CH]) || month [FIRST_CH] == '0')
        return ASSET_FLAG;
}

int fflag_null (char * month)
{
    if (month [FIRST_CH] == '0')
        return ASSET_FLAG;
}