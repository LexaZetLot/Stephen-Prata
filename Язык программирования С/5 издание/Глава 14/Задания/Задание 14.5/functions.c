#include <stdio.h>
#include "functions.h"

void input (struct student * pt)
{
    for (int i = START_INTERACTION; i < CSIZE; i++)
    {   
        printf ("Введите оценки %s %s\n", pt [i].names.lastname, pt [i].names.name);
        for (int j = START_INTERACTION; j < GRADE; j++)
            scanf ("%lf", &pt [i].grade [j]);
    }
}

void mid_score (struct student * pt)
{
    for (int i = START_INTERACTION; i < CSIZE; i++)
    {   
        for (int j = START_INTERACTION; j < GRADE; j++)
            pt[i].mid += pt[i].grade[j];
        
        pt[i].mid /= GRADE;
    }
}

void print (struct student * pt)
{
    for (int i = START_INTERACTION; i < CSIZE; i++)
    {
        printf ("%s %s - баллы", pt[i].names.lastname, pt[i].names.name);
        
        for (int j = START_INTERACTION; j < GRADE; j++)
            printf (" %.2lf", pt[i].grade [j]);
        
        printf ("\nсредний балл%.2lf\n", pt[i].mid);
    }
}

void mid_pol (struct student * pt)
{
    int i;
    double bufer;
    
    for (i = START_INTERACTION, bufer = START_INTERACTION; i < CSIZE; i++)
        bufer += pt[i].grade [0];
    printf ("Средний балл по первой оценки равен %.2lf\n", bufer / CSIZE);
    
    for (i = START_INTERACTION, bufer = START_INTERACTION; i < CSIZE; i++)
        bufer += pt[i].grade [1];
    printf ("Средний балл по второй оценки равен %.2lf\n", bufer / CSIZE);
    
    for (i = START_INTERACTION, bufer = START_INTERACTION; i < CSIZE; i++)
        bufer += pt[i].grade [2];
    printf ("Средний балл по третей оценки равен %.2lf\n", bufer / CSIZE);
    
    for (i = START_INTERACTION, bufer = START_INTERACTION; i < CSIZE; i++)
        bufer += pt[i].grade [3];
    printf ("Средний балл по четвертый оценки равен %.2lf\n", bufer / CSIZE);
    
    for (i = START_INTERACTION, bufer = START_INTERACTION; i < CSIZE; i++)
        bufer += pt[i].mid;
    printf ("Общий средний %.2lf\n", bufer / CSIZE);
}