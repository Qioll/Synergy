#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int log, pas;
	bool wh = false;

	printf("Введите логин: ");
	scanf_s("%i", &log);
	printf("Введите пароль: ");
	scanf_s("%i", &pas);

	if ((log == 111) && (pas == 222))
	{
		printf("Вход в 1-й аккаунт выполнен успешено.");
		return 0;
	}
	else
	{
		printf("Error");
		return 0;
	}
	if ((log == 333) && (pas == 444))
	{
		printf("Вход во 2-й аккаунт выполнен успешено.");
		return 0;
	}
	else
	{
		printf("Error");
		return 0;
	}
	if ((log == 555) && (pas == 666))
	{
		printf("Вход в 3-й аккаунт выполнен успешено.");
		return 0;
	}
	else
	{
		printf("Error");
		return 0;
	}
	if ((log == 777) && (pas == 888))
	{
		printf("Вход в 4-й аккаунт выполнен успешено.");
		return 0;
	}
	else
	{
		printf("Error");
		return 0;
	}
	system("pause");
	return 0;
}
