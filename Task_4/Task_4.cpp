#include <iostream>

int main()
{
    setlocale (LC_ALL, "Russian");
    int number; 
    scanf_s("%i",& number);

    switch (number) {
    case 1:
        printf ("Понедельник\n");
        break;
    case 2:
        printf("Вторник\n");
        break;
    case 3:
        printf("Среда\n");
        break;
    case 4:
        printf("Четверг\n");
        break;
    case 5:
        printf("Пятница\n");
        break;
    case 6:
        printf("Суббота\n");
        break;
    case 7:
        printf("Воскресенье\n");
        break;
    default:
        printf("Error\n");
    }
    system("pause");
    return 0;
    
}


