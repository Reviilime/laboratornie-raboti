#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    int a[10];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int k = 0;
    for (i = 1; i < n; ++i)
    {
        if (a[k] != a[i])
        {
            ++k;
            a[k] = a[i];
        }
    }
    ++k;

    printf("A - %i\n", k);
    for (i = 0; i < k; ++i)
        printf("  %i: %i\n", i + 1, a[i]);
}

void t2()
{
    int a[10];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int ai, i2, k, num;
    for (i = 0; i < n; i++)
    {
        num = 0;
        for (i2 = 0; i2 < n; ++i2)
            if (a[i] == a[i2])
                ++num;

        if (num == 2)
        {
            k = i - 1;
            ai = a[i];
            for (i2 = i; i2 < n; ++i2)
                if (a[i2] != ai)
                {
                    ++k;
                    a[k] = a[i2];
                }
            n = k + 1;
            --i;
        }
    }

    printf("A - %i\n", n);
    for (i = 0; i < n; ++i)
        printf("  %i: %i\n", i + 1, a[i]);
}

void t3()
{
    int a[20];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int i2;
    for (i = n - 1; i >= 0; --i)
    {
        if (a[i] > 0)
        {
            ++n;
            for (i2 = n - 1; i2 > i; --i2)
                a[i2] = a[i2 - 1];
            a[i] = 0;
        }
    }

    for (i = 0; i < n; ++i)
        printf("  %i: %i\n", i + 1, a[i]);
}

void t4()
{
    int a[20];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int i2;
    for (i = n - 1; i >= 0; --i)
    {
        if (a[i] < 0)
        {
            ++n;
            for (i2 = n; i2 > i; --i2)
                a[i2] = a[i2 - 1];
            a[i + 1] = 0;
        }
    }

    for (i = 0; i < n; ++i)
        printf("  %i: %i\n", i + 1, a[i]);
}

void t5()
{
    int a[20];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int i2;
    for (i = n - 1; i >= 0; --i)
    {
        if (a[i] > 0)
        {
            ++n;
            for (i2 = n - 1; i2 > i; --i2)
                a[i2] = a[i2 - 1];
            a[i] = 0;
        }
    }

    for (i = 0; i < n; ++i)
        printf("  %i: %i\n", i + 1, a[i]);
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