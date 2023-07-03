// troble.c -- неправильное исполь зование знака =
// приводит к возникновению бесконечных циклов 
#include <stdio.h>
int main (void)
{
    long num;
    long sum = 0L;
    int status;
    
    printf ("Bвeдитe целое число для последующего суммирования");
    printf ("(или q для завершения программы):");
    
    status = scanf("%ld", &num);
    
    while (status = 1)
    {
        sum = sum + num;
        printf ("Bвeдитe следующее целое число (или q для завершения программы):");
        status = scanf ("%ld", &num);
    }
    
    printf("Cyммa введенных целых чисел равна %ld.\n", sum);
    
    return 0; 
}