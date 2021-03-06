#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    int A, B = 0;
    printf("Введите A B: ");
    scanf("%i%i", &A, &B);
    if (A!=B)
    {
        if (A>B)
            B = A;
        else
            A = B;
        printf("%i %i\n", A, B);
    }
    else
    {
        A = 0, B = 0;
        printf("%i %i\n", A, B);
    }
}

void t2()
{
    int A, B, C = 0;
    printf("Введите A B C: ");
    scanf("%i%i%i", &A, &B, &C);
    if ((A<=B) && (A<=C))
        printf("%i\n", B+C);
    else if ((B<=A) && (B<=C))
        printf("%i\n", A+C);
    else if ((C<=A) && (C<=B))
        printf("%i\n", A+B);
}

void t3()
{
    int A, B, C, AB, AC = 0;
    printf("Введите A B C: ");
    scanf("%i%i%i", &A, &B, &C);
    AB = abs(A-B);
    AC = abs(A-C);
    if (AB < AC)
        printf("В ближе к А. AB=%i.\n", AB);
    else if (AC < AB)
        printf("C ближе к А. AC=%i.\n", AC);
    else if (AB == AC)
        printf("B и C равноудалены от А на %i.\n", AB);
}

void t4()
{
    int x, y = 0;
    printf("Введите x y: ");
    scanf("%i%i", &x, &y);
    if ((x>0) && (y>0)) printf("Точка лежит в I координатной четверти.\n");
    if ((x<0) && (y>0)) printf("Точка лежит во II координатной четверти.\n");
    if ((x<0) && (y<0)) printf("Точка лежит в III координатной четверти.\n");
    if ((x>0) && (y<0)) printf("Точка лежит в IV координатной четверти.\n");
    }

void t5()
{
    int x = 0;
    printf("Введите: ");
    scanf("%i", &x);
    if (x==0) printf("нулевое");
    else if (x<0)
    {
        if (x%2!=0) printf("отрицательное нечетное");
        else printf("отрицательное четное");
    }
    else
    {
        if (x%2!=0) printf("положительное нечетное");
        else printf("положительное четное");
    }
    printf(" число\n");
}

void t6()
{
    int x = 0;
    printf("Введите x: ");
    scanf("%i", &x);
    if (x%2 == 0)
        printf("Чётное ");
    else
        printf("Нечётное ");
    if (x > 99)
        printf("трёхзначное");
    if ((x < 100) && (x > 9))
        printf("двухзначное");
    if (x < 10)
        printf("однозначное");
    printf(" число\n");
}

int main()
{
    system("chcp 65001"); //изменение кодовой страницы
    system("cls");
    printf("Введите число от 1 до 6:\n1. Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.\n2. Даны три числа. Найти сумму двух наибольших из них\n3. На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.\n4. Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка\n5. Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.\n6. Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.\n");
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