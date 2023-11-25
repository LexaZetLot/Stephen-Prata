#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

void * opne_file ()
{
    FILE * fp_bufer;
                            
    if ((fp_bufer = fopen ("Colossus_Airlines.dat", "r + b")) == NULL) 
    {
        fputs ("He удается открыть файл Colossus_Airlines.dat\n", stderr);
        exit (ONE_FLAG);
    }
    
    rewind (fp_bufer);
    
    return fp_bufer;
}

void skip ()
{
    while (getchar () != '\n')
        continue; 
}

void initializing(struct colossus_airlines * air_plase)
{
    for (int i = 0; i < PLACE; i++)
    {
        strcpy (air_plase[i].lastname, "No");
        strcpy (air_plase[i].name, "No");
        air_plase[i].nomber_place = i + 1;
        air_plase[i].flag_reserv = false;
    }
}

char menu ()
{
    auto char ch;
    
    printf ("Для выбора функции введите ее буквенное обозначение:\n");
    printf ("а)Показать количество свободных мест\n");
    printf ("Ь)Показать список пустых свободных мест\n");
    printf ("с)Показать алфавитный список занятых мест\n");
    printf ("d)Назначить пассажиру место\n");
    printf ("е)Удалить назначение места\n");
    printf ("f)Выйти из программы\n");
    scanf ("%c", &ch);
    
    skip ();  
    return ch;
}

void fre_plase (struct colossus_airlines * air_plase)
{
    static int flag_fre_plase;
    
    for (int i = 0; i < PLACE; i++)
        if (strcmp (air_plase[i].lastname, "No") == 0)
            flag_fre_plase++;
    
    printf ("Свободных мест: %d\n", flag_fre_plase);
}

void fre_plase_lest (struct colossus_airlines * air_plase)
{
    printf ("Фамиля         Имя      Место Бронь\n");
    for (int i = 0; i < 12; i++)
        if (strcmp (air_plase[i].lastname, "No") == 0)
            printf ("%s | %3s | %3d | %3d\n", air_plase[i].lastname, air_plase[i].name, air_plase[i].nomber_place, air_plase[i].flag_reserv);
}

void des_a_loc (struct colossus_airlines * air_plase)
{
    int number, bool_bufer;
    
    
    printf ("Введите номер места: ");
    scanf ("%d", &number);
    skip ();
    
    if (number <= PLACE && OK_CODE < number)
    {
        printf ("Введите фамилию пасажира: ");
        scanf ("%s", air_plase[number - 1].lastname);
        printf ("Введите имя пасажира: ");
        scanf ("%s", air_plase[number - 1].name);
        printf ("Введите бронь (если бронировано 1 или 0 соответсвенно): ");
        scanf ("%d", &bool_bufer);
        air_plase[number - 1].flag_reserv = bool_bufer;
        skip ();
    }
    else 
        printf ("Некоректный ввод");
}

void del_a_loc (struct colossus_airlines * air_plase)
{
    static int number;
    
    printf ("Введите номер места: ");
    scanf ("%d", &number);
    skip ();
    
    if (number <= PLACE && OK_CODE < number)
    {
        strcpy (air_plase[number - 1].lastname, "No");
        strcpy (air_plase[number - 1].name, "No");
        air_plase[number - 1].flag_reserv = false;
    }
    else 
        printf ("Некоректный ввод");
}

void sort (struct colossus_airlines * air_plase)
{
    struct colossus_airlines bufer_struct;
    
    for(int i = 1; i < PLACE; i++)
        for(int j = 0; j < PLACE - i; j++)
            if(strcmp (air_plase[j].lastname, air_plase[j + 1].lastname) > 0)
            {
                bufer_struct = air_plase[j];
                air_plase[j] = air_plase[j + 1];
                air_plase[j + 1] = bufer_struct;
            }

    printf ("Фамиля         Имя      Место Бронь\n");
    for (int i = 0; i < 12; i++)
        if (strcmp (air_plase[i].lastname, "No") == 0)
            printf ("%s | %3s | %3d | %3d\n", air_plase[i].lastname, air_plase[i].name, air_plase[i].nomber_place, air_plase[i].flag_reserv);
}

void save_data_file (struct colossus_airlines * air_plase, FILE * fp)
{
    int size = sizeof (struct colossus_airlines);
    rewind (fp);
    fwrite (&air_plase [OK_CODE], size, PLACE, fp);
}

void dowlnd_data_file (struct colossus_airlines * air_plase, FILE * fp)
{
    
    rewind (fp);
    int size = sizeof (struct colossus_airlines);
    for (int i = 0; i < PLACE; i++)
        fread (&air_plase [i], size, 1, fp);

    
    rewind (fp);
}