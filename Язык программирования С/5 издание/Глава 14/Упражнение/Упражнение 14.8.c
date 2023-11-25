#include <stdio.h>
#include <string.h>

struct fullname
{
    char fname [20];
    char lname [20];
};

struct bard
{
    struct fullname name;
    int born;
    int died;
};

int main (void)
{
    struct bard willie;
    struct bard *pt = &willie;
    
    willie.born = 3;
    pt -> born = 7;
    
    scanf ("%d", &willie.born);
    scanf ("%d", &(pt -> born));
    scanf ("%s", willie.name.lname);
    scanf ("%s", pt -> name.lname);
    
    willie.name.lname [2] = 'g';
    printf ("%ld", strlen (willie.name.lname) + strlen (willie.name.fname));
    return 0;
}
