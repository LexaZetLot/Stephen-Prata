/* summing .c -- суммирует целые числа , вводимые в интерактивном режиме */
#include <stdio.h>

int main (void)
{
    long num;
    long sum = 0L;                                                              /* инициализация переменной sum нулем */
    int status;
    
    printf ("Bвeдитe целое число для последующего суммирования");
    printf ("(или q для завершения программы) : ");
    
    status = scanf ("%ld", &num);
    
    while ( status == 1)                                                       /* == обозначает равенство */
    {
        sum = sum + num;
        printf ( "Bвeдитe следующее целое число (или q для завершения программы) : "); 
        status = scanf ("%ld" , &num) ;
    }
    printf ( " Сумма введенных целых чисел равна %ld. \n" , sum ) ;
    return 0;
}