#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    int a[10], b[10], c[10];
    int N;
    printf("Введите N: ");
    scanf("%i", &N);
    int i;
    for (i = 0; i < N; ++i)
    {
        printf("Введите a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int k = 0;
    b[k] = 1;
    c[k] = a[k];
    for (i = 1; i < N; ++i)
    {
        if (a[i - 1] == a[i])
            ++b[k];
        else
        {
            ++k;
            b[k] = 1;
            c[k] = a[i];
        }
    }
    for (i = 0; i <= k; ++i)
        printf("  %i>%i:%i\n", i + 1, b[i], c[i]);
}

void t2()
{
    int a[20], b[20];
    int n, l;
    printf("Введите N: ");
    scanf("%i", &n);
    printf("Введите L: ");
    scanf("%i", &l);

    int i;
    for (i = 0; i < n; ++i)
    {
        printf("Введите a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int i2 = -1, len = 1, i3, endn = n;

    for (i = 1; i < n; ++i)
    {
        if (a[i - 1] != a[i])
        {
            if (len > l)
            {
                b[++i2] = 0;
                endn -= len - 1;
            }
            else
            {
                for (i3 = 0; i3 < len; ++i3)
                    b[++i2] = a[i - 1];
            }
            len = 0;
        }
        ++len;
    }
    if (len > l)
    {
        b[++i2] = 0;
        endn -= len - 1;
    }
    else
    {
        for (i3 = 0; i3 < len; ++i3)
            b[++i2] = a[i - 1];
    }

    for (i = 0; i < endn; ++i)
        a[i] = b[i];

    for (i = 0; i < endn; ++i)
        printf("a  %i : %i\n", i + 1, a[i]);
}

void t3()
{
    int a[20], b[20];
    int n, k;
    printf("Введите N: ");
    scanf("%i", &n);
    printf("Введите K: ");
    scanf("%i", &k);

    int i;
    for (i = 0; i < n; ++i)
    {
        printf("Введите a[%i]: ", i + 1);
        scanf("%i", &a[i]);
    }

    int i2 = -1, len1series = 1, lenkseries = 0, endkseries, nk = 1;

    for (i = 0; i < 20; ++i)
        b[i] = 0;

    for (i = 1; (i < n) && (nk <= k); ++i)
    {
        if (a[i - 1] != a[i])
            nk++;
        if (nk == 1)
            len1series++;
        if (nk == k)
        {
            lenkseries++;
            b[++i2] = a[i];
        }
        endkseries = i;
    }

    for (i = len1series, nk = 1; (i < n) && (i < endkseries - lenkseries); ++i)
    {
        if (a[i - 1] != a[i])
            nk++;
        b[++i2] = a[i];
    }

    for (i = 0; i < len1series; ++i)
        b[++i2] = a[i];

    for (i = endkseries; i < n; ++i)
        b[++i2] = a[i];

    for (i = 0; i < n; ++i)
        a[i] = b[i];

    for (i = 0; i < n; ++i)
        printf("a  %i : %i\n", i + 1, a[i]);
}

void t4()
{
    float a[10][2];
    int n;

    printf("Введите N: ");
    scanf("%i", &n);

    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]:\n", i + 1);
        printf("  x : ");
        scanf("%f", &a[i][0]);
        printf("  y : ");
        scanf("%f", &a[i][1]);
    }

    int amax = 0;
    float r, rmax;
    for (i = 0; i < n; ++i)
    {
        if (a[i][0] < 0 && a[i][1] > 0)
        {
            r = sqrt(pow(a[i][0], 2) + pow(a[i][1], 2));
            if (r > rmax || i == 0)
            {
                rmax = r;
                amax = i;
            }
        }
    }

    printf("A  %i :\n x: %f\n y: %f\n", amax + 1, a[amax][0], a[amax][1]);
}

void t5()
{
    float a[10][2];
    int n;

    printf("Введите N: ");
    scanf("%i", &n);

    int i;
    for (i = 0; i < n; ++i)
    {
        printf("a[%i]:\n", i + 1);
        printf("  x : ");
        scanf("%f", &a[i][0]);
        printf("  y : ");
        scanf("%f", &a[i][1]);
    }

    int p1, p2, p3, i2, i3;
    float p, pmax = 0;

    for (i = 0; i < n; ++i)
        for (i2 = i + 1; i2 < n; ++i2)
            for (i3 = i2 + 1; i3 < n; ++i3)
            {
                p = 0;
                p += sqrt(pow(a[i][0] - a[i2][0], 2) + pow(a[i][1] - a[i2][1], 2));
                p += sqrt(pow(a[i][0] - a[i3][0], 2) + pow(a[i][1] - a[i3][1], 2));
                p += sqrt(pow(a[i2][0] - a[i3][0], 2) + pow(a[i2][1] - a[i3][1], 2));
                if (p > pmax)
                {
                    p1 = i;
                    p2 = i2;
                    p3 = i3;
                    pmax = p;
                }
            }

    printf("P: %f\n", pmax);
    printf("A %i :\n x: %f\n y: %f\n", p1 + 1, a[p1][0], a[p1][1]);
    printf("A %i :\n x: %f\n y: %f\n", p2 + 1, a[p2][0], a[p2][1]);
    printf("A %i :\n x: %f\n y: %f\n", p3 + 1, a[p3][0], a[p3][1]);
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