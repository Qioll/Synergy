#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr_size;
    int number;
    bool wh = true;
    
    printf("Размер массива (от 1 до 100): ");
    while (wh)
    {
        scanf_s("%i", &arr_size);
        if (arr_size >= 1 && arr_size <= 100)
        {
            wh = false;
        }
        else
        {
            printf("Размер массива меньше 1 или больше 100\n Введите размер массива ещё раз:");
        }
    }
    size_t size = arr_size;
    vector<int> arr(size);

    printf("Введите %i символов\n", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        scanf_s("%i", &number);
        arr[i] = number;
    }
    printf("Массив до сортировки: \n");
    for (int i = 0; i < arr_size; i++)
    {
        printf(" %i", arr[i]);
    }

    for (int i = 0; i < arr_size - 1 ; i++)
    {
        for (int j = 0; j < arr_size - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    printf("\nМассив после сортировки: \n");
    for (int i = 0; i < arr_size; i++)
    {
        printf(" %i", arr[i]);
    }
    printf("\n");
    system("pause");
}



