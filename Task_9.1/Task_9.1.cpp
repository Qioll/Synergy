#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float initial_amount, loan_amount, percent, monthly_rate, total_bet, monthly_payment, percent_part, main_part, remaining_debt, mortgage_term, annuity_ratio;
    printf("Введите cумму взноса: ");
    scanf_s("%f", &initial_amount);
    printf("Введите cумму кредита: ");
    scanf_s("%f", &loan_amount);
    printf("Введите процентную ставку: ");
    scanf_s("%f", &percent);
    printf("Срок ипотеки (год): ");
    scanf_s("%f", &mortgage_term);

    remaining_debt = loan_amount - initial_amount; //Остаток долга

    mortgage_term = mortgage_term * 12.0; //Срок ипотеки в месяцах.
    monthly_rate = percent / 12.0 / 100.0; //Ежемесячная ставка

    annuity_ratio = (monthly_rate * pow((1.0 + monthly_rate), mortgage_term)) / (pow((1.0 + monthly_rate), mortgage_term) - 1.0); // Коэффициента аннуитета

    monthly_payment = remaining_debt * annuity_ratio;

    percent_part = remaining_debt * monthly_rate; // Процентная часть. 
    main_part = monthly_payment - percent_part;//Основная часть. 
    remaining_debt = remaining_debt - main_part;

    int mas[240][5];
    for (int i = 0; i < mortgage_term; i++)
    {
        mas[i][0] = i+1;
        mas[i][1] = remaining_debt;
        mas[i][2] = main_part;
        mas[i][3] = percent_part;
        mas[i][4] = monthly_payment;


        percent_part = remaining_debt * monthly_rate; // Процентная часть
        main_part = monthly_payment - percent_part;// Основная часть
        remaining_debt = remaining_debt - main_part;// Остаток долга
    }


    cout
        << left
        << setw(20)
        << "Месяц" 
        << left
        << setw(20)
        << "Остаток долга"
        << left
        << setw(20)
        << "Основной платёж"
        << left
        << setw(20)
        << "Процентная часть"
        << left
        << setw(20)
        << "Общая сумма платежа"
        << endl;

    for (int i = 0; i < (mortgage_term); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout
                << left
                << setw(20)
                << mas[i][j];

        }
        printf("\n");
    }

}


