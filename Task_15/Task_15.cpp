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
    vector<vector<int>> newArr(column_length, vector<int>(row_length));

    for (int i = 0; i < row_length; i++)
    {
        printf("Заполните строку №%i\n", i + 1);
        for (int j = 0; j < column_length; j++)
        {
            printf("Введите число: ");
            cin >> arr[i][j];
        }
    }

    printf("\nВывод массива до конвертации:\n");
    for (int i = 0; i < row_length; i++)
    {
        for (int j = 0; j < column_length; j++)
        {
            printf("%2i", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < column_length; i++)
    {
        for (int j = 0; j < row_length; j++)
        {
            newArr[i][j] = arr[j][i];
        }
    }

    printf("\nВывод массива после конвертации:\n");
    for (int i = 0; i < column_length; i++)
    {
        for (int j = 0; j < row_length; j++)
        {
            printf("%2i", newArr[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
