#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void findDistance()
{
    system("cls");
    printf("Найти расстояние между двумя точками с заданными координатами (x₁, y₁) и (x₂, y₂)\n");
    float x1, y1, x2, y2 = 0;
    printf("Введите x₁: ");
    scanf("%f", &x1);
    printf("Введите y₁: ");
    scanf("%f", &y1);
    printf("Введите x₂: ");
    scanf("%f", &x2);
    printf("Введите y₂: ");
    scanf("%f", &y2);
    printf("Расстояние = %f\n", sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}

void findACandBCandSumm()
{
    system("cls");
    printf("Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.\n");
    int A, B, C = 0;
    printf("Введите A: ");
    scanf("%i", &A);
    printf("Введите B: ");
    scanf("%i", &B);
    printf("Введите C: ");
    scanf("%i", &C);
    printf("AC = %i\n", abs(C - A));
    printf("BC = %i\n", abs(C - B));
    printf("AC + BC = %i\n", abs(C - A) + abs(C - B));
}

void findACxBC()
{
    system("cls");
    printf("Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B. Найти произведение длин отрезков AC и BC\n");
    int A, B, C = 0;
    printf("Введите A: ");
    scanf("%i", &A);
    printf("Введите B: ");
    scanf("%i", &B);
    printf("Введите C: ");
    scanf("%i", &C);
    printf("AC x BC = %i\n", abs(C - A) * abs(C - B));
}

void findPandSRectangle()
{
    system("cls");
    printf("Даны координаты двух противоположных вершин прямоугольника (x₁, y₁), (x₂, y₂). Стороны прямоугольника параллельны осям координат. Найти P и S данного прямоугольника.\n");
    int x1, y1, x2, y2 = 0;
    printf("Введите x₁: ");
    scanf("%i", &x1);
    printf("Введите y₁: ");
    scanf("%i", &y1);
    printf("Введите x₂: ");
    scanf("%i", &x2);
    printf("Введите y₂: ");
    scanf("%i", &y2);
    printf("P = %i\n", (abs(y2 - y1) + abs(x2 - x1)) * 2);
    printf("S = %i\n", abs(y2 - y1) * abs(x2 - x1));
}

void findPandSTriangle()
{
    system("cls");
    printf("Даны координаты трех вершин треугольника (x₁, y₁), (x₂, y₂), (x₃, y₃). Найти его P и S\n");
    float x1, y1, x2, y2, x3, y3, a, b, c, P = 0;
    printf("Введите x₁: ");
    scanf("%f", &x1);
    printf("Введите y₁: ");
    scanf("%f", &y1);
    printf("Введите x₂: ");
    scanf("%f", &x2);
    printf("Введите y₂: ");
    scanf("%f", &y2);
    printf("Введите x₃: ");
    scanf("%f", &x3);
    printf("Введите y₃: ");
    scanf("%f", &y3);
    a = sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrtf((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    c = sqrtf((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    P = a + b + c;
    printf("P = %f\n", P);
    printf("S = %f\n", sqrt(P/2 * (P/2 - a) * (P/2 - b) * (P/2 - c)) );
}

int main()
{
    system("chcp 65001"); //изменение кодовой страницы
    system("cls");
    printf("Введите число от 1 до 5:\n1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)\n2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.\n3. Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B. Найти произведение длин отрезков AC и BC\n4. Даны координаты двух противоположных вершин прямоугольника: (x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат. Найти периметр и площадь данного прямоугольника.\n5. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь\n");
    int task = 0;
    scanf("%i", &task);
    switch (task)
    {
        case 1:
            findDistance();
            break;
        case 2:
            findACandBCandSumm();
            break;
        case 3:
            findACxBC();
            break;
        case 4:
            findPandSRectangle();
            break;
        case 5:
            findPandSTriangle();
            break;
    }
    system("pause");
    return 0;
}