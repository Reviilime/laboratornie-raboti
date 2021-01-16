#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    int A = 1;
    int B = 2;
    int m = 0;
    m = A;
    A = B;
    B = m;
    printf("A = %i\nB = %i", A, B);
}

void t2()
{
    int A = 1;
    int B = 2;
    int C = 3;
    int m = 0;
    m = B;
    B = A;
    A = C;
    C = m;
    printf("A = %i\nB = %i\nC = %i", A, B, C);
}

void t3()
{
    int A = 1;
    int B = 2;
    int C = 3;
    int m = 0;
    m = C;
    C = A;
    A = B;
    B = m;
    printf("A = %i\nB = %i\nC = %i\n", A, B, C);
}

void t4()
{
    int x = 0;
    printf("Введите x: ");
    scanf("%i", &x);
    printf("y = %f\n", 3*pow(x, 6)-6*pow(x, 2)-7);
}

void t5()
{
    int x = 0;
    printf("Введите x: ");
    scanf("%i", &x);
    printf("y = %f\n", 4*pow(x-3, 6)-7*pow(x-3, 3)+2);
}

void t6()
{
    int A, A2 = 0;
    printf("Введите A: ");
    scanf("%i", &A);
    A2 = A * A;
    A = A2 * A2;
    A2 = A * A;
    printf("A = %i\n", A2);
}

void t7()
{
    long A, A2, A3 = 0;
    printf("Введите A: ");
    scanf("%li", &A);
    A2 = A * A;  //a2
    A3 = A2 * A; //a3
    A = A3 * A2; //a5
    A3 = A * A;  //a10
    A = A3 * A;  //A15
    printf("A = %li\n", A);
}

int main()
{
    system("chcp 65001"); //изменение кодовой страницы
    system("cls");
    printf("Введите число от 1 до 7:\n1. Поменять местами содержимое переменных A и B и вывести новые значения A и B.\n2. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B в C, C в A, и вывести новые значения переменных A, B, C.\n3. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C в B, B в A, и вывести новые значения переменных A, B, C.\n4. Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x\n5. Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x\n6. Дано число A. Вычислить A8 , используя вспомогательную переменную и три операции умножения.\n7. Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения.\n");
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
        case 7:
            t7();
            break;
    }
    system("pause");
    return 0;
}