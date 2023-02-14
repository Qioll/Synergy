#include <math.h>
#include <iostream>

int square(int value)
{
    int digit;
    double buffer;
    buffer = pow(value, 0.5);
    digit = pow(int(buffer), 2);
    return digit;
}

int sqrt_count(int x, int y, int z)
{
    int count = 0;
    int temp;
    temp = square(x);
    if (temp == x)
    {
        count++;
    }

    temp = square(y);

    if (temp == y)
    {
        count++;
    }

    temp = square(z);

    if (temp == z)
    {
        count++;
    }

    return count;
}

void sqrt_count(int x, int y, int z, int* c) 
{ 
    *c = sqrt_count(x, y, z); 
}

void sqrt_count(int x, int y, int z, int& c)
{ 
    c = sqrt_count(x, y, z);
 }

int main()
{
    int x,y,z, c = 0;
    setlocale (LC_ALL, "Russian");
    printf("Введите 1 число: ");
    scanf_s("%i", &x);
    printf("Введите количество столбцов: ");
    scanf_s("%i", &y);
    printf("Введите количество столбцов: ");
    scanf_s("%i", &z);
    printf("%i\n", sqrt_count(x, y, z));
    sqrt_count(x, y, z, &c);
    printf("%i\n", c);
    sqrt_count(x, y, z, c);
    printf("%i\n", c);
    system ("pause");
}
