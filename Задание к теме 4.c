#include <stdio.h>
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
    printf("Нахождение длины окружности L = π·d\n");
    float d = 0;
    printf("Введите d: ");
    scanf("%f", &d);
    printf("L = π x %f = %f\n", d, 3.14 * d);
}

void findArithmeticMean()
{
    system("cls");
    printf("Нахождение среднего арифметического a и b\n");
    float a, b = 0;
    printf("Введите a: ");
    scanf("%f", &a);
    printf("Введите b: ");
    scanf("%f", &b);
    printf("(%f + %f) / 2 = %f\n", a, b, (a + b) / 2);
}

void find4Sq()
{
    system("cls");
    printf("Нахождение суммы, разности, произведения и частного квадратов a и b\n");
    float a, b = 0;
    printf("Введите a: ");
    scanf("%f", &a);
    printf("Введите b: ");
    scanf("%f", &b);
    printf("%f² + %f² = %f\n", a, b, a * a + b * b); //Сумма
    printf("%f² - %f² = %f\n", a, b, a * a - b * b); //Разность
    printf("%f² x %f² = %f\n", a, b, a * a * (b * b)); //Произведение
    printf("%f² / %f² = %f\n", a, b, a * a / (b * b)); //Частное
}

void find4Abs()
{
    system("cls");
    printf("Нахождение суммы, разности, произведения и частного модулей a и b\n");
    int a, b = 0;
    printf("Введите a: ");
    scanf("%i", &a);
    printf("Введите b: ");
    scanf("%i", &b);
    printf("|%i| + |%i| = %i\n", a, b, abs(a) + abs(b)); //Сумма
    printf("|%i| - |%i| = %i\n", a, b, abs(a) - abs(b)); //Разность
    printf("|%i| x |%i| = %i\n", a, b, abs(a) * abs(b)); //Произведение
    printf("|%i| / |%i| = %i\n", a, b, abs(a) / abs(b)); //Частное
}

int main()
{
    system("chcp 65001"); //изменение кодовой страницы
    system("cls");
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