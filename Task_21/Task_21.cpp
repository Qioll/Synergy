#include <iostream>
#include <conio.h>
void change_str(char str[], char symbol)
{
    str[0] = symbol;
    str[strlen(str) - 1] = symbol;
    puts(str);
}

void change_str(char str[])
{
    int start = 0 , end = strlen(str); 

    while (str[start] == ' ') 
    {
        start++;
    }
        
    while (str[end - 1] == ' ') 
    {
        end--;
    }
        
    for (start; start < end; start++) 
    {
        printf("%c",str[start]);
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    char str[100];
    char symbol;
    printf("Введите строку: ");
    gets_s(str);
    printf("Введите символ: ");
    symbol = _getch();
    printf("\nСтрока с удалёнными первыми и последними пробелами: ");
    change_str(str);
    printf("\nСтрока с изменённым первым и последним символом: ");
    change_str(str, symbol);   
}

