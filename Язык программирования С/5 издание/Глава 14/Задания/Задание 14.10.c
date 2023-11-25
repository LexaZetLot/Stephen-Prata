#include <stdio.h>

char menu (void);
int add (int a, int b);
int ded (int a, int b);
int mul (int a, int b);
int dev (int a, int b);

int main (void)
{
    int (*p [4])(int, int) = {add, ded, mul, dev};
    static char ch;
    
    ch = menu ();
    
    switch (ch)
    {
        case 'a':
            printf ("%d", (*p[0])(2, 2));
            break;
        case 'b':
            printf ("%d", (*p[1])(2, 2));
            break;
        case 'c':
            printf ("%d", (*p[2])(2, 2));
            break;
        case 'd':
            printf ("%d", (*p[3])(2, 2));
            break;
    }

    return 0;
}


char menu (void)
{
    static char ch;
    
    printf ("Выберете пункт\n");
    printf ("a) сложение\n");
    printf ("b) вычитание\n");
    printf ("с) умножение\n");
    printf ("d) деление\n");
    scanf ("%c", &ch);
    
    return ch;
}

int add (int a, int b)
{
    return a + b;
}

int ded (int a, int b)
{
    return a - b;
}

int mul (int a, int b)
{
    return a * b;
}

int dev (int a, int b)
{
    return a / b;
}