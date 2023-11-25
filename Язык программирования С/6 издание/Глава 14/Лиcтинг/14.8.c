/*names1.c -- использует указатели на структуры*/

#include <stdio.h>
#include <string.h>

#define NLEN 30 

char * s_gets (char * st, int n);

struct namect 
{
    char fname [NLEN];
    char lname [NLEN];
    int letters;
};

void getinfo (struct namect *);
void makeinfo (struct namect *);
void showinfo (const struct namect *);

int main (void) 
{
    struct namect person;
    
    getinfo (&person);
    makeinfo (&person);
    showinfo (&person);
    
    return 0;
}

void getinfo (struct namect * pst)
{
    printf ("Bвeдитe свое имя.\n"); 
    s_gets (pst -> fname, NLEN);
    printf ("Bвeдитe свою фамилию.\n"); 
    s_gets (pst -> lname, NLEN);
}

void makeinfo (struct namect * pst)
{
    pst -> letters = strlen (pst -> fname) + strlen (pst -> lname);
}

void showinfo (const struct namect * pst)
{
    printf ("%s %s, ваше имя и фамилия содержат %d букв.\n", pst -> fname, pst -> lname, pst -> letters);
}

char * s_gets (char * st, int n)
{
    char * ret_val;
    char * find;
    int i = 0;
    
    ret_val = fgets (st, n, stdin);
    if (ret_val)
    {
        find = strchr (st, '\n');                                               //поиск символа новой строки
        if (find)                                                               //если адрес не является NULL,
            * find = '\0';                                                      //поместить туда нулевой символ
        else
            while (getchar() != '\n')
                continue;                                                       //отбросить остаток строки
    }
    return ret_val;
}