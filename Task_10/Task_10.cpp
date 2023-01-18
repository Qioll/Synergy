#include <iostream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    int arr_first[7];
    printf("Введите 7 символов\n");
    for (int i = 0; i < 7; i++)
    {
        scanf_s("%i", &number);
        arr_first[i] = number;
    }
    printf("Вывод массива: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%2i", arr_first[i]);
    }

    int arr_size;
    printf("\nВведите размер массива: ");
    scanf_s("%i", &arr_size);
    size_t size = arr_size;
    std::vector<int> arr_second(size);

    printf("Введите %i символов\n", arr_size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%i", &number);
        arr_second[i] = number;
    }
    printf("Вывод массива: ");
    for (int i = 0; i < size; i++)
    {
        printf("%2i", arr_second[i]);
    }
    printf("\n");
    system("pause");
}