#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void findSandP()
{
    system("cls");
    printf("Нахождение площади S = a·b и периметра P = 2·(a + b) прямоугольника\n");
    float a, b = 0;
    printf("Введите a: ");
    scanf("%f", &a);
    printf("Введите b: ");
    scanf("%f", &b);
    printf("S = %f x %f = %f\n", a, b, a * b);
    printf("P = 2 x (%f + %f) = %f\n", a, b, 2 * (a + b));
}

void findL()
{
    system("cls");
    printf("Находится в разработке\n");
}

void findArithmeticMean()
{
    system("cls");
    printf("Находится в разработке\n");
}

void find4Sq()
{
    system("cls");
    printf("Находится в разработке\n");
}

void find4Abs()
{
    system("cls");
    printf("Находится в разработке\n");
}

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Введите число от 1 до 5, чтобы найти\n1. Площадь S = a·b и периметр P = 2·(a + b) прямоугольника.\n2. Длину окружности L = π·d.\n3. Среднее арифметическое двух чисел.\n4. Сумму, разность, произведение и частное квадратов двух чисел.\n5. Найти сумму, разность, произведение и частное модулей двух чисел.\n");
    int task = 0;
    scanf("%i", &task);
    switch (task)
    {
        case 1:
            findSandP();
            break;
        case 2:
            findL();
            break;
        case 3:
            findArithmeticMean();
            break;
        case 4:
            find4Sq();
            break;
        case 5:
            find4Abs();
            break;
    }
    system("pause");
    return 0;
}