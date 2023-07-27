#include <stdio.h>
#define МАХ 100

int main(void)
{
    int count = МАХ + 1;
    while (-- count > 0)
    {
        printf ( "%d бутылок минеральной воды на полке, "
        "%d бутылок мин еральной воды!\n" , count , count);
        printf ("Возьмите одну из них и пустите по кругу,\n");
        printf ("%d бутылок минеральной воды!\n\n", count - 1);
    }
    
    return 0;
}