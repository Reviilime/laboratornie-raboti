#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void powerA3(float a, float *b)
{
   *b=a*a*a;
}

void t1()
{
    int i;
    for (i = 1; i <= 5; ++i)
    {
        float a;
        printf("A: ");
        scanf("%f", &a);
        float b;
        powerA3(a, &b);
        printf("B: %f\n", b);
    }
}

int sign(float x)
{
    if (x < 0)
        return -1;
    else if (x == 0)
        return 0;
    else
        return 1;
}

void t2()
{
    float A, B;
    printf("Введите вещественные числа А и В: ");
    scanf("%f%f", &A, &B);
    printf("Результат: %i\n", sign(A) + sign(B));
}

float rings(float r1, float r2)
{
    return 3.14 * (r1 * r1 - r2 * r2);
}

void t3()
{
    for (int i = 1; i <= 3; ++i)
    {
        float r1, r2;
        printf("R1: ");
        scanf("%f", &r1);
        printf("R2: ");
        scanf("%f", &r2);
        printf("S: %f\n", rings(r1, r2));
    }
}

int quarter(float x, float y)
{
    if ((x > 0) && (y > 0))
        return 1;
    if ((x < 0) && (y > 0))
        return 2;
    if ((x < 0) && (y < 0))
        return 3;
    if ((x > 0) && (y < 0))
        return 4;
}

void t4()
{
    for (int i = 1; i <= 3; ++i)
    {
        float x, y;
        printf("X: ");
        scanf("%f", &x);
        printf("Y: ");
        scanf("%f", &y);
        printf("%i\n", quarter(x, y));
    }
}

float fact2(int n)
{
    int a = 1;
    for (; n > 0; n -= 2)
        a *= n;
    return a;
}

void t5()
{
    int n;
    printf("N:");
    scanf("%i", &n);
    printf("%f\n", fact2(n));
}

int main()
{
    system("chcp 65001"); //изменение кодовой страницы
    system("cls");
    printf("Введите номер задачи: ");
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