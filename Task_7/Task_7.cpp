#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int stop = 0;

    printf("Таблица умножения на 5, от 1 до 10\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%i\n", 5 * i);
    }

    printf("Программа завершит работу, если ввести цифру 7\nВведите цифру: ");
    while (stop != 7) 
    {
        
        scanf_s("%i", &stop);

        if (stop == 7)
        {
            exit;
            return 0;
        }
        else
        {
            if(stop > 7)
            {
                printf("Число больше 7\n");
                if (stop > 10)
                {
                    printf("Число больше 10\n");
                }
                else
                {

                    printf("Число меньше 10\n");
                }
            }
            else
            {
                printf("Число меньше 7\n");
                printf("Число меньше 10\n");
            }

            if (stop % 2 == 0)
            {
                printf("Число делится на 2\n");
            }
            else
            {
                printf("Число НЕ делится на 2\n");
            }

            if (stop % 3 == 0)
            {
                printf("Число делится на 3\n");
            }
            else
            {
                printf("Число НЕ делится на 3\n");
            }

        }
        printf("\nВведите цифру: ");
    }
}

