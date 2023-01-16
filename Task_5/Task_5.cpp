#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int day, month, year, zodiac;

    printf("Введите дату родждения!\nДень: ");
    scanf_s("%i",&day);
    printf("Месяц: ");
    scanf_s("%i", &month);
    printf("Год: ");
    scanf_s("%i", &year);
    printf("\n");

    if (year % 4 == 0)
    {
        printf("Год високосный\n");
    }
    else
    {
        printf("Год не високосный\n");
    }

    switch (year%12) 
    {
        case 4:
            printf("Год по восточному календарю: Крыса\n");
            break;
        case 5:
            printf("Год по восточному календарю: Бык\n");
            break;
        case 6:
            printf("Год по восточному календарю: Тигр\n");
            break;
        case 7:
            printf("Год по восточному календарю: Кролик\n");
            break;
        case 8:
            printf("Год по восточному календарю: Дракон\n");
            break;
        case 9:
            printf("Год по восточному календарю: Змея\n");
            break;
        case 10:
            printf("Год по восточному календарю: Лошадь\n");
            break;
        case 11:
            printf("Год по восточному календарю: Коза\n");
            break;
        case 0:
            printf("Год по восточному календарю: Обезьяна\n");
            break;
        case 1:
            printf("Год по восточному календарю: Петух\n");
            break;
        case 2:
            printf("Год по восточному календарю: Собака\n");
            break;
        case 3:
            printf("Год по восточному календарю: Свинья\n");
            break;
    }

    zodiac = 100 * month + day;
    if (zodiac >= 121 && zodiac <= 220)   printf("Знак зодиака: Водолей\n");
    if (zodiac >= 221 && zodiac <= 320)   printf("Знак зодиака: Рыбы\n");
    if (zodiac >= 321 && zodiac <= 420)   printf("Знак зодиака: Овен\n");
    if (zodiac >= 421 && zodiac <= 520)   printf("Знак зодиака: Телец\n");
    if (zodiac >= 521 && zodiac <= 620)   printf("Знак зодиака: Близнецы\n");
    if (zodiac >= 621 && zodiac <= 720)   printf("Знак зодиака: Рак\n");
    if (zodiac >= 721 && zodiac <= 820)   printf("Знак зодиака: Лев\n");
    if (zodiac >= 821 && zodiac <= 920)   printf("Знак зодиака: Дева\n");
    if (zodiac >= 921 && zodiac <= 1020)  printf("Знак зодиака: Весы\n");
    if (zodiac >= 1021 && zodiac <= 1120) printf("Знак зодиака: Скорпион\n");
    if (zodiac >= 1121 && zodiac <= 1220) printf("Знак зодиака: Стрелец\n");
    if (zodiac >= 1221 || zodiac <= 120)  printf("Знак зодиака: Козерог\n");
    system("pause");

}