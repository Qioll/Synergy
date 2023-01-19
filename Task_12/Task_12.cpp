#include <iostream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr_size;
    int number;
    int sum = 0;
    float average = 0;
    printf("Сколько символов вы хотите ввести: ");
    scanf_s("%i", &arr_size);
    size_t size = arr_size;
    std::vector<int> arr(size);

    printf("Введите %i символов\n", arr_size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%i", &number);
        arr[i] = number;
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum = sum + arr[i];
        average = average + arr[i];
    }

    printf("\nМаксимальное значение = %i\n", max);
    printf("Минимальное значение = %i\n", min);
    printf("Сумма элементов массива = %i\n", sum);
    printf("Среднее арефметическое = %f\n", average / arr_size);
    system("pause");
}
