#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian"); 
	string even_numbers = "Чётные числа: ";
	string odd_numbers = "Нечётные числа: ";
	int sum = 0;

	printf("Вывод Hello 9 раз\n");
	for (int i = 0; i < 9; i++)
	{
		printf("Hello\n");
	}

	printf("Вывод чисел от 0, увеличивая число с каждым циклом на 1, с 15 интерациями цикла.\n");
	for (int i = 0; i < 15; i++)
	{
		printf(" %i", i);
		if (i % 2 == 0)
		{
			even_numbers = even_numbers + " " + to_string(i);
		}
		else
		{
			odd_numbers = odd_numbers + " " + to_string(i);
		}
	}
	printf("\n%s", even_numbers.c_str());
	printf("\n%s", odd_numbers.c_str());

	for (int i = 5; i <= 15; i++)
	{
		sum = sum + i;
	}
	printf("\nСумма чисел от 5 до 15 включительно: %i\n", sum);
	system("pause");
}

