#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void findSandP()
{
    system("cls");
    printf("���������� ������� S = a�b � ��������� P = 2�(a + b) ��������������\n");
    float a, b = 0;
    printf("������� a: ");
    scanf("%f", &a);
    printf("������� b: ");
    scanf("%f", &b);
    printf("S = %f x %f = %f\n", a, b, a * b);
    printf("P = 2 x (%f + %f) = %f\n", a, b, 2 * (a + b));
}

void findL()
{
    system("cls");
    printf("��������� � ����������\n");
}

void findArithmeticMean()
{
    system("cls");
    printf("��������� � ����������\n");
}

void find4Sq()
{
    system("cls");
    printf("��������� � ����������\n");
}

void find4Abs()
{
    system("cls");
    printf("��������� � ����������\n");
}

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("������� ����� �� 1 �� 5, ����� �����\n1. ������� S = a�b � �������� P = 2�(a + b) ��������������.\n2. ����� ���������� L = ?�d.\n3. ������� �������������� ���� �����.\n4. �����, ��������, ������������ � ������� ��������� ���� �����.\n5. ����� �����, ��������, ������������ � ������� ������� ���� �����.\n");
    int task = 0;
    scanf("%i", &task);
    switch (task)
    {
        case 1:
            findSandP();
            break;
        case 2:
            findL();
            break;
        case 3:
            findArithmeticMean();
            break;
        case 4:
            find4Sq();
            break;
        case 5:
            find4Abs();
            break;
    }
    system("pause");
    return 0;
}