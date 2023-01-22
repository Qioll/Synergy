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
        for (int j = 0; j < column_length; j++)
        {
            arr[i][j] = -2 + (rand() % 10);
        }
    }

    printf("\nВывод массива:\n");
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
