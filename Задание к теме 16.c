#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    int a[10];
    int n, i = 1, i2 = 1;
    printf("N: ");
    scanf("%i", &n);
    for (i = 0; i < n; ++i, i2 += 2)
        a[i] = i2;
    for (i = 0; i < n; ++i)
        printf("%i : %i\n", i, a[i]);
}

void t2()
{
    int a[10];
    int d, n, i, pow;
    printf("N: ");
    scanf("%i", &n);
    printf("A[0]: ");
    scanf("%i", &a[0]);
    printf("D: ");
    scanf("%i", &d);
    pow = 1;
    for (i = 1; i < n; ++i)
    {
        pow *= d;
        a[i] = a[0] * pow;
    }
    for (i = 0; i < n; ++i)
        printf("%i : %i\n", i, a[i]);
}

void t3()
{
    int a[10];
    int n, i;
    printf("N: ");
    scanf("%i", &n);
    printf("A: ");
    scanf("%i", &a[0]);
    printf("B: ");
    scanf("%i", &a[1]);

    for (i = 2; i < n; ++i)
    {
        a[i] = 0;
        int i2;
        for (i2 = 0; i2 < i; ++i2)
            a[i] += a[i2];
    }
    for (i = 0; i < n; ++i)
        printf("%i : %i\n", i, a[i]);
}

void t4()
{
    int a[10];
    int n, i;
    printf("N: ");
    scanf("%i", &n);
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    for (i = 0; i < n / 2 + 1; i += 2)
    {
        printf("%i\n", a[i]);
        if (i < n / 2)
            printf("%i\n", a[i + 1]);
        if (n - i - 1 > n / 2)
            printf("%i\n", a[n - i - 1]);
        if (n - i - 2 > n / 2)
            printf("%i\n", a[n - i - 2]);
    }
}

void t5()
{
    int a[10];
    int n, i;
    printf("N: ");
    scanf("%i", &n);
    for (i = 0; i < n; ++i)
    {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }

    for (i = 0; i < n; i += 2)
        printf("%i\n", a[i]);
    for (i = n - (n % 2) - 1; i >= 1; i -= 2)
        printf("%i\n", a[i]);
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