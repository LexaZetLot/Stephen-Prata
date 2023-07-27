//defines.c -- использует определенные константы из файла limit.h и тип float.h
#include <stdio.h>
#include <limits.h>                                                              // целочисленные пределы 
#include <float.h>                                                              // пределы для чисел с плав ающей запя той

int main(void)
{
    printf("Heкoтopыe пределы для данной системы:\n");
    printf("Наибольшее значение тип а int: %d\n", INT_MAX);
    printf("Наименьшее знач ение тип а long long : %lld\n" , LLONG_MIN);
    printf("Oдин байт = %d разрядов в данной системе.\n", CHAR_BIT);
    printf("Наибольшее значение типа double: %e\n", DBL_MAX );
    printf("Наименьшее нормальное значение типа float: %e\n", FLT_MIN);
    printf("Toчнocть значений типа float = %d знаков\n", FLT_DIG);
    printf("Различие между 1.ОО и наименьшим значением float , превышающим 1.00 = %e\n", FLT_EPSILON);

    return 0;
}