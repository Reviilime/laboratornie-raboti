#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    int a[10], b[10];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }
    for (i = 0; i < n; ++i)
    {
        printf("b[%i]: ", i + 1);
        scanf("%i", &b[i]);
    }

    for (i = 0; i < n; ++i)
    {
        a[i] += b[i];
        b[i] = a[i] - b[i];
        a[i] = a[i] - b[i];
    }

    printf("A: \n");
    for (i = 0; i < n; ++i)
        printf("  %i: %i\n", i + 1, a[i]);

    printf("B: \n");
    for (i = 0; i < n; ++i)
        printf("  %i: %i\n", i + 1, b[i]);
}

void t2()
{
    float a[10], b[10];
    int n;

    printf("N: ");
    scanf("%i", &n);

    int k;
    for (k = 0; k < n; ++k)
    {
        printf("a[%i]: ", k + 1);
        scanf("%f", &a[k]);
    }

    int i;
    for (k = 0; k < n; ++k)
    {
        b[k] = 0;
        for (i = k; i < n; ++i)
        {
            b[k] += a[i];
        }
    }

    printf("B: \n");
    for (k = 0; k < n; ++k)
        printf("  %i: %f\n", k + 1, b[k]);
}

void t3()
{
    int a[10];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }

    int odd = 0;

    for (i = n - 1; i >= 0; --i)
    {
        if (a[i] % 2 != 0)
        {
            odd = a[i];
            break;
        }
    }

    for (; i >= 0; --i)
    {
        if (a[i] % 2 != 0)
        {
            a[i] += odd;
        }
    }

    printf("A: \n");
    for (i = 0; i < n; ++i)
        printf("  %i: %i\n", i + 1, a[i]);
}

void t4()
{
    int a[10];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }

    int min = 0, max = 0;

    for (i = n - 1; i >= 0; --i)
    {
        if (a[i] > a[max])
            max = i;
        if (a[i] < a[min])
            min = i;
    }

    if (max < min)
    {
        max += min;
        min = max - min;
        max = max - min;
    }

    for (i = min + 1; i < min + (max - min); ++i)
        a[i] = 0;

    printf("A: \n");
    for (i = 0; i < n; ++i)
        printf("  %i: %i\n", i + 1, a[i]);
}

int swap(float *f1, float *f2)
{
    *f1 += *f2;
    *f2 = *f1 - *f2;
    *f1 = *f1 - *f2;
    return 0;
}

void t5()
{
    float a[10];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]: ", i + 1);
        scanf("%f", &a[i]);
    }

    for (i = n - 2; i >= 0; --i)
    {
        if (a[i] < a[i + 1])
        {
            swap(&a[i], &a[i + 1]);
        }
    }

    for (i = 1; i < n; ++i)
    {
        if (a[i - 1] < a[i])
        {
            swap(&a[i - 1], &a[i]);
        }
    }
    printf("A: \n");
    for (i = 0; i < n; ++i)
        printf("  %i: %f\n", i + 1, a[i]);
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