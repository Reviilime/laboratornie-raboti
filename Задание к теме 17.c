#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    int a[10];
    int n, k, l;
    printf("N: ");
    scanf("%i", &n);
    printf("K: ");
    scanf("%i", &k);
    printf("L: ");
    scanf("%i", &l);
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }

    int sum = 0;
    for (i = 0; i < k - 1; ++i)
        sum += a[i];
    for (i = l; i < n; ++i)
        sum += a[i];
    printf("%f\n: ", (float)sum / (float)(k - 1 + (n - l)));
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
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }

    int r = a[1] - a[0];
    for (i = 1; i < n; ++i)
    {
        if (r != a[i] - a[i - 1])
        {
            r = 0;
        }
    }
    printf("%i\n: ", r);
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
        printf("a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int min = a[1];
    for (i = 1; i < n; i += 2)
    {
        if (a[i] < min)
            min = a[i];
    }
    printf("%i\n", min);
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

    if (a[n - 1] > a[n - 2])
    {
        printf("%i \n", n);
    }
    else
    {
        i = n - 2;
        while ((i >= 1) && !((a[i - 1] < a[i]) && (a[i] > a[i + 1])))
        {
            --i;
        }
        printf("%i \n", i + 1);
    }
}

void t5()
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

    int i2;
    for (i = 0; i < n - 1; ++i)
    {
        for (i2 = i + 1; i2 < n; ++i2)
        {
            if (a[i] == a[i2])
            {
                printf("%i %i\n", i + 1, i2 + 1);
            }
        }
    }
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