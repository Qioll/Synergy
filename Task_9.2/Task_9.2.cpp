#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	string mas[10];
	for (int i = 0; i < 5; i++)
	{
			cin >> mas[i];
	}

	for (int i = 0; i < 4; i++)
	{ 
		for (int j = 0; j < 4; j++)
		{
			if (mas[j][0] > mas[j + 1][0])
				swap(mas[j], mas[j + 1]);
		}
	}

	printf("Отсортированный массив:\n");
	for (int i = 0; i < 5; i++)
	{
		cout << mas[i];
		printf("\n");
	}
}


