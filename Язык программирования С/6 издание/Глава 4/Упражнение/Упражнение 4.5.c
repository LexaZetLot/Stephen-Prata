#include <stdio.h>

int main(void)
{
    float size_file, spid;
    
    printf ("Введите количество мегабит в секунду и размер файла: ");
    scanf ("%f %f", &spid, &size_file);
    printf ("При скорости загрузки %0.2f мегабит в секунду файл размером %0.2f мегабайт\n", spid, size_file);
    printf ("загружается за %0.2f секунд (ы).", (size_file * 1024 * 1024 * 8) / (spid * 1000000));

    return 0;
}