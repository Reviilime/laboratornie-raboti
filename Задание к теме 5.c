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
    float A, B, C = 0;
    printf("Введите A: ");
    scanf("%f", &A);
    printf("Введите B: ");
    scanf("%f", &B);
    printf("Введите C: ");
    scanf("%f", &C);
    printf("AC = %f\nBC = %f\n", sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    //TODO
}

void findACxBC()
{
    system("cls");
    printf("To be done\n");
    //TODO
}

void findPandSRectangle()
{
    system("cls");
    printf("To be done\n");
    //TODO
}

void findPandSTriangle()
{
    system("cls");
    printf("To be done\n");
    //TODO
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