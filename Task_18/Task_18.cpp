#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char arr[100];
    printf("Введите слово: ");
    gets_s(arr);
    int arr_size = strlen(arr);

    for (int i = 0;i < arr_size;i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Строка после удаления 1-го элемента: %s\n", arr);

    printf("\nВведите слово: ");
    gets_s(arr);
    char new_arr[100];

    for (int i = 0; i < arr_size; i++)
    {
        new_arr[arr_size - 1 - i] = arr[i];
    }
    new_arr[arr_size] = arr[arr_size];

    printf("Отзеркаленная строка: %s\n", new_arr);
    system("pause");
}
