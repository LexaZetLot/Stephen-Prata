/*filmsЗ.c -- использование связного списка в стиле ADT*/
/*компилировать вместе с list.c*/

#include <stdio.h>
#include <stdlib.h>                                                             /*прототип функции exit ()*/
/*mall.c -- использует интерфейс Queue*/
/* компилируе тся вме сте с queue .c */ 

#include <stdio.h>
#include <stdlib.h>                                                             /*содержит определения функций rand () и srand ()*/
#include <time.h>                                                               /*содержит определение функции time ()*/
#include "queue.h"                                                              /*изменение определения typedef типа Item */

#define MIN_PER_HR 60.0

bool newcustomer (double х);                                                    /*имеется новый клиент?*/ 
Item customertime (long when);                                                  /* установка параметров клиента*/

int main (void) 
{
    Queue line; 
    Item temp;                                                                  /*данные нового клиента*/
    int hours;                                                                  /*длительность периода имитации в часах*/
    int perhour;                                                                /*среднее число прибывающих клиентов в час*/
    long cycle, cyclelimit [2], bufer;                                                     /*счетчик и граничное значение цикла*/
    long turnaways [2] = {0, 0};                                                         /*число отказов из-за переполненной очереди*/
    long customers [2] = {0, 0};                                                         /*число клиентов присоединившихся к очереди*/ 
    long served [2] = {0, 0};                                                            /*число клиентов обслуженных за время имитации*/
    long sum_line [2] = {0, 0};                                                          /*накопительное значение длины очереди*/ 
    int wait_time [2] = {0, 0};                                                          /*время до освобождения Зигмунда*/ 
    double min_per_cust;                                                        /*среднее время между прибытиями клентов*/ 
    long line_wait [2] = {0, 0};                                                         /*накопительное значение ожидания в очереди*/
    
    InitializeQueue (&line);
    srand (time (0));                                                           /*случайная инициализация функции rand ()*/
    puts ("Учебный пример: консуль тационный киоск Зигмунда Ландера");
    puts ("Введите длительность периода имитации в часах: ");
    scanf ("%d", &hours);
    bufer = MIN_PER_HR * hours;
    cyclelimit [0] = bufer / 2;
    cyclelimit [1] = bufer - cyclelimit[0];
    puts ("Введите среднее количество клиентов, прибывающих за час: ");
    scanf ("%d", &perhour);
    min_per_cust = MIN_PER_HR / perhour;
    for (int i = 0; i < 2; i++)
    {
        for (cycle = 0; cycle < cyclelimit[i]; cycle++)
        {
            if (newcustomer (min_per_cust))
            {
                if (QueueIsFull(&line))
                    turnaways[i]++;
                else
                {
                    customers[i]++;
                    temp = customertime (cycle);
                    EnQueue (temp, &line); 
                }
            }
            if (wait_time[i] <= 0 && !QueueIsEmpty (&line))
            {
                DeQueue (&temp, &line); 
                wait_time[i] = temp.processtime;
                line_wait[i] += cycle - temp.arrive;
                served[i]++; 
            }
            if (wait_time[i] > 0)
                wait_time[i]--;
            sum_line[i] += QueueItemCount (&line);
        }
        
        if (customers[i] > 0)
        {
            printf ("     принятых клиентов: %ld\n", customers[i]); 
            printf ("  обслуженных клиентов: %ld\n", served[i]);
            printf ("               отказов: %ld\n", turnaways[i]);
            printf (" средняя длина очереди: %.2f\n", (double) sum_line[i] / cyclelimit[i]);
            printf ("cpeднee время ожидания: %.2fминут\n",  (double) line_wait[i] / served[i]);
            printf ("********\n");
        }
        else
            puts ("Клиенты отсутствуют!");
    }
    
    EmptyTheQueue (&line);
    puts ("Программа завершена."); 

    return 0;
}

/*х = среднее время между прибытием клиентов, в минутах*/
/*возвращаемое значение - true, если клиент появляется в течение данной минуты*/
bool newcustomer (double х)
{
    if (rand () * х / RAND_MAX < 1)
        return true; 
    else 
        return false; 
}

/* when - время прибытия кли ента */
/* функция во звращает структуру Item со значением времени прибытия */
/* установленным равным значению when, а значением времени о бслуживания*/
/* установленным равным случайному значению в диапазоне 1 - 3 */
Item customertime (long when) 
{
    Item cust;
    
    cust.processtime = rand () % 3 + 1;
    cust.arrive = when; 
    
    return cust; 
}