#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char arr[100];
    int char_number = 0;
    printf("Введите слово: ");
    gets_s(arr);
    printf("2-й символ: %c\n", arr[1]);
    int arrSize = strlen(arr) ;
    printf("Последний символ: %c\n", arr[arrSize-1]);
    swap(arr[0], arr[1]);
    printf("Поменяли местами 1-й и 2-й символы местами: %s\n", arr);

    printf("\nВведите номер элемента строки, который нужно удалить: ");
    scanf_s("%i", &char_number);
    for (int i = char_number - 1;i < arrSize;i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Строка после удаления элемента: %s\n", arr);
    system("pause");
}
