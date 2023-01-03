#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    int first,second;
    printf("Введите первое число\n Первое число = ");
    scanf("%i",&first);
    printf("Введите второе число\n Второе число = ");
    scanf("%i",&second);
    if (first == second)
    {
        printf("Равны\n");
    }
    else
    {
        if (first > second)
        {
            printf("Больше\n");
        }
        else
        {
            printf("Меньше\n");
        }
    }
    system("pause");
}
