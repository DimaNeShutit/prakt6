#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "RUS");
    int yeas;
    printf("������� ���: ");
    scanf_s("%d", &yeas);
    if (yeas % 4 == 0)
    {
        if (yeas % 100 == 0)
        {
            if (yeas % 400 == 0)
            {
                printf("%d ��� - ����������", yeas);
            }
            else
            {
                printf("%d ��� - �� ����������", yeas);
            }
        }
        else
        {
            printf("%d ��� - ����������", yeas);
        }
    }
    else
    {
        printf("%d ��� - �� ����������", yeas);
    }
}