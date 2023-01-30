#include <iostream>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int row_length, column_length;

    printf("Введите количество строк: ");
    scanf_s("%i", &row_length);
    printf("Введите количество столбцов: ");
    scanf_s("%i", &column_length);

    vector<vector<int>> arr(row_length, vector<int>(column_length));

    for (int i = 0; i < row_length; i++)
    {
        printf("Заполните строку №%i\n", i + 1);
        for (int j = 0; j < column_length; j++)
        {
            printf("Введите число: ");
            cin >> arr[i][j];
        }
    }

    printf("\nВывод исходного массива:\n");
    for (int i = 0; i < row_length; i++)
    {
        for (int j = 0; j < column_length; j++)
        {
            printf("%2i", arr[i][j]);
        }
        printf("\n");
    }

    for (int row = 0; row < row_length; row++)
    {
        for (int i = 0; i < column_length; i++)
        {
            for (int j = 0; j < column_length - 1; j++) 
            {
                if (arr[row][j] > arr[row][j + 1])
                    swap(arr[row][j], arr[row][j + 1]);
            }
        }
    }

    printf("\nВывод массива отсортированного по строчкам:\n");
    for (int i = 0; i < row_length; i++)
    {
        for (int j = 0; j < column_length; j++)
        {
            printf("%2i", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row_length; i++)
    {
            swap(arr[i][0], arr[i][column_length -1]);
    }

    printf("\nПоменяли местами первый и последний столбец:\n");
    for (int i = 0; i < row_length; i++)
    {
        for (int j = 0; j < column_length; j++)
        {
            printf("%2i", arr[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
