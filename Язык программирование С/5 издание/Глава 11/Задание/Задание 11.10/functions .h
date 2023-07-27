#define MAX_SIZE 401
#define NEW_NULL 0


// Меня / выбор значения меню / возврат значения выбора
int menu (void);

//вывод списка
void list_in (int size, int max_size, char str [size] [max_size]);

// функция сортировки указателей строк
void stsrt (int size, char * ptr[]);

//функция выводя чписка через массив указателей
void ptr_in (int size, char *ptr[]);

//Сортировка по длине сотроки
void buble_str (int size, int max_size, char str [size] [max_size]);

//Сортировка по длине первого слова
void buble_word (int size, int max_size, char str [size] [max_size]);