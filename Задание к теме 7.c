#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    float a = 0;
    printf("Введите a: ");
    scanf("%f", &a);
    printf("a = %fπ\n", a/180);
}

void t2()
{
    float a = 0;
    printf("Введите a без π: ");
    scanf("%f", &a);
    printf("a = %f◦\n", a*180);
}

void t3()
{
    float x, a, y, kg1 = 0;
    printf("Введите кол-во кг и стоимость: ");
    scanf("%f", &x);
    scanf("%f", &a);
    printf("Стоимость какого кол-ва кг определить: ");
    scanf("%f", &y);
    kg1 = a/x;
    printf("1 кг - %f руб\n%f кг - %f руб\n", kg1, y, kg1*y);
}

void t4()
{
    float v1, v2, s, t = 0;
    printf("Введите V1 V2 S t: ");
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &s);
    scanf("%f", &t);
    printf("Расстояние между ними будет %f км\n", s+v1*t+v2*t);
}

void t5()
{
    float A, B = 1;
    printf("Введите A B: ");
    scanf("%f%f", &A, &B);
    printf("x = %f\n", -B/A);
}

void t6()
{
    float A1, B1, C1, A2, B2, C2, D = 1;
    printf("Введите A1 B1 C1 A2 B2 C2: ");
    scanf("%f%f%f%f%f%f", &A1, &B1, &C1, &A2, &B2, &C2);
    D = A1*B2-A2*B1;
    printf("x = %f\ny = %f\n", (C1*B2-C2*B1)/D, (A1*C2-A2*C1)/D);
}

int main()
{
    system("chcp 65001"); //изменение кодовой страницы
    system("cls");
    printf("Введите число от 1 до 6:\n1. Дано значение угла α в градусах (0 < α < 360). Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов.\n2. Дано значение угла α в радианах (0 < α < 2·π). Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов\n3. Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.\n4. Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. Определить расстояние между ними через T часов, если автомобили удаляются друг от друга.\n5. Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).\n6. Найти решение системы линейных уравнений вида\nA1·x + B1·y = C1,\nA2·x + B2·y = C2,\n");
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
        case 6:
            t6();
            break;
    }
    system("pause");
    return 0;
}