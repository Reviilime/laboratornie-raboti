#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    float a, b = 0;
    printf("Введите цену 1 кг: ");
    scanf("%f", &a);
    printf("Введите кг: ");
    scanf("%f", &b);
    printf("%f рублей\n", a*b);
}

void t2()
{
    int N = 0;
    float res = 1.0;
    printf("Введите N: ");
    scanf("%i", &N);
    for (int i = 1; i <= N; i++)
        res = res * (1 + 0.1 * i);
    printf("%f\n", res);
}

void t3()
{
    int N = 0;
    printf("Введите N: ");
    scanf("%i", &N);
    int res = 0;
    for (int i = 1; i <= (2 * N - 1); i += 2)
    {
        res += i;
        printf("%i\n", res);
    }
}

void t4()
{
    float A = 0;
    printf("Введите A: ");
    scanf("%f", &A);
    int N = 0;
    printf("Введите N: ");
    scanf("%i", &N);
    float res = 0;
    for (int i = 0; i <= N; ++i)
    {
        res += pow(A, i);
    }
    printf("%f\n", res);
}

void t5()
{
    float A = 0;
    printf("Введите A: ");
    scanf("%f", &A);
    int N = 0;
    printf("Введите N: ");
    scanf("%i", &N);
    float res = 0;
    for (int i = 0; i <= N; ++i)
    {
        res = res + pow(A, i) * (-1 * (i+1));
    }
    printf("%f\n", res);
}

int main()
{
    system("chcp 65001"); //изменение кодовой страницы
    system("cls");
    printf("Введите номер:\n1. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.\n2. Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).\n3. Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы\n4. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN\n5. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 1 − A + A2 − A3 + . . . ± AN .\n");
    int task = 0;
    scanf("%i", &task);
    switch (task)
    {
        case 1:
            t1();
            break;
        case 2:
            t2();
            break;
        case 3:
            t3();
            break;
        case 4:
            t4();
            break;
        case 5:
            t5();
            break;
    }
    system("pause");
    return 0;
}