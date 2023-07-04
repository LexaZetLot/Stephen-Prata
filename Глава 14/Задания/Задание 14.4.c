#include <stdio.h>


struct name
{
    char name [41];
    char last_name [41];
    char cutoff [41];
};

struct soc_ins 
{
    int number;
    struct name fio;
};

void print_struct (const struct soc_ins new_soc_ins [], int N);

int main (void)
{
    struct soc_ins new_soc_ins [5] =
    {
        { 
            1,
            {
                "Маша",
                "Каша",
                "Александровна"
            }
        },
        { 
            2,
            {
                "Паша",
                "Каша",
                "Александровна"
            }
        },
        { 
            3,
            {
                "Даша",
                "Каша",
                "Александровна"
            }
        },
        { 
            4,
            {
                "Ваша",
                "Каша",
                "Александровна"
            }
        },
        { 
            5,
            {
                "Таша",
                "Каша",
                "Александровна"
            }
        }
    };
    
    print_struct (new_soc_ins, 5);
    
    
    return 0;
}


void print_struct (const struct soc_ins new_soc_ins [], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (new_soc_ins [i].fio.cutoff [0] != '\0')
            printf ("%s, %s %c. -- %d\n", 
                    new_soc_ins [i].fio.last_name, new_soc_ins [i].fio.name,
                    new_soc_ins [i].fio.cutoff [0], new_soc_ins [i].number);
        else
            printf ("%s, %s -- %d\n", 
                new_soc_ins [i].fio.last_name, new_soc_ins [i].fio.name,
                new_soc_ins [i].number);
    }
}