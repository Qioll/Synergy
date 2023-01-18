#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int number, max = 0, min = 0, size = 0;
    float average = 0;
    printf("Сколько символов вы хотите ввести: ");
    scanf_s("%i",&size);
  

    printf("Введите %i символов\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%i", &number);
        if (i == 0) 
        {
            min = number;
            max = number;
        }
        if (number > max)
        {
            max = number;
        }
        if (number < min)
        {
            min = number;
        }
        average = average + number;
    }

    printf("\nМаксимальное значение = %i\n", max);
    printf("Минимальное значение = %i\n", min);
    printf("Среднее арифметическое элементов = %f\n", average / size);
    system("pause");
}
