#include <iostream>


void fill(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }

    printf("\nЗаполненый массив: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%2i  ", arr[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int arr_first[25];
    int arr_second[50];
    fill(arr_first, 25);
    fill(arr_second, 50);

    printf("\n");
    system("pause");
    return 0;
}
