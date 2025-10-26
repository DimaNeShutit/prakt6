#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "RUS");
    int yeas;
    printf("Введите год: ");
    scanf_s("%d", &yeas);
    if (yeas % 4 == 0)
    {
        if (yeas % 100 == 0)
        {
            if (yeas % 400 == 0)
            {
                printf("%d год - високосный", yeas);
            }
            else
            {
                printf("%d год - не високосный", yeas);
            }
        }
        else
        {
            printf("%d год - високосный", yeas);
        }
    }
    else
    {
        printf("%d год - не високосный", yeas);
    }
}