#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void t1()
{
    int a, b = 0;
    printf("Введите: ");
    scanf("%i%i", &a, &b);
    switch (b)
    {
        case 1:
            printf("%i-е января\n", a);
            break;
        case 2:
            printf("%i-е февраля\n", a);
            break;
        case 3:
            printf("%i-е марта\n", a);
            break;
        case 4:
            printf("%i-е апреля\n", a);
            break;
        case 5:
            printf("%i-е мая\n", a);
            break;
        case 6:
            printf("%i-е июня\n", a);
            break;
        case 7:
            printf("%i-е июля\n", a);
            break;
        case 8:
            printf("%i-е августа\n", a);
            break;
        case 9:
            printf("%i-е сентября\n", a);
            break;
        case 10:
            printf("%i-е октября\n", a);
            break;
        case 11:
            printf("%i-е ноября\n", a);
            break;
        case 12:
            printf("%i-е декабря\n", a);
            break;
    }
}

void t2()
{
    char *C = " ";
    int N = 0;
    printf("Введите C N: ");
    scanf("%c%i", &C, &N);
    switch (N)
    {
    case 0:
        printf("%c\n", C);
        break;
    
    case 1:
        if (C == "С")
            C = "З";
        else if (C == "З")
            C = "Ю";
        else if (C == "Ю")
            C = "В";
        else if (C == "В")
            C = "С";
        printf("%c\n", C);
        break;

    case -1:
        if (C == "С")
            C = "В";
        else if (C == "З")
            C = "С";
        else if (C == "Ю")
            C = "З";
        else if (C == "В")
            C = "Ю";
        printf("%c\n", C);
        break;
    
    default:
        printf("Команда не задана.");
        break;
    }
}

void t3()
{
    int a = 0;
    printf("Введите: ");
    scanf("%i", &a);
    switch (a)
    {
    case 1:
    case 21:
    case 31:
        printf("%i учебное задание\n", a);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
        printf("%i учебных заданий\n", a);
        break;
    case 2:
    case 3:
    case 4:
    case 22:
    case 23:
    case 24:
    case 32:
    case 33:
    case 34:
        printf("%i учебных задания\n", a);
        break;
    }
}

void t4()
{
    int N = 0;
    printf("Введите N: ");
    scanf("%i", &N);
    switch (N / 100)
    {
    case 1:
        printf("сто ");
        break;
    case 2:
        printf("двести ");
        break;
    case 3:
        printf("триста ");
        break;
    case 4:
        printf("четыреста ");
        break;
    case 5:
        printf("пятьсот ");
        break;
    case 6:
        printf("шестьсот ");
        break;
    case 7:
        printf("семьсот ");
        break;
    case 8:
        printf("восемьсот ");
        break;
    case 9:
        printf("девятьсот ");
        break;
    }

    if ((N % 100 / 10) == 1)
    {
        switch (N % 100)
        {
        case 10:
            printf("десять");
            break;
        case 11:
            printf("одинадцать");
            break;
        case 12:
            printf("двенадцать");
            break;
        case 13:
            printf("тринадцать");
            break;
        case 14:
            printf("четырнадцать");
            break;
        case 15:
            printf("пятнадцать");
            break;
        case 16:
            printf("шестнадцать");
            break;
        case 17:
            printf("семнадцать");
            break;
        case 18:
            printf("восемнадцать");
            break;
        case 19:
            printf("девятнадцать");
            break;
        }
    }
    else
    {
        switch ((N % 100) / 10)
        {
        case 2:
            printf("двадцать ");
            break;
        case 3:
            printf("тридцать ");
            break;
        case 4:
            printf("сорок ");
            break;
        case 5:
            printf("пятьдесят ");
            break;
        case 6:
            printf("шестьдесят ");
            break;
        case 7:
            printf("семьдесят ");
            break;
        case 8:
            printf("восемьдесят ");
            break;
        case 9:
            printf("девяносто ");
            break;
        }
        switch (N % 10)
        {
        case 1:
            printf("один");
            break;
        case 2:
            printf("два");
            break;
        case 3:
            printf("три");
            break;
        case 4:
            printf("четыре");
            break;
        case 5:
            printf("пять");
            break;
        case 6:
            printf("шесть");
            break;
        case 7:
            printf("семь");
            break;
        case 8:
            printf("восемь");
            break;
        case 9:
            printf("девять");
            break;
        }
    }
}

void t5()
{
    int N = 0;
    printf("Введите: ");
    scanf("%i", &N);
    switch (N % 10)
    {
    case 0:
    case 1:
        printf("бел");
        break;
    case 2:
    case 3:
        printf("черн");
        break;
    case 4:
    case 5:
        printf("зелён");
        break;
    case 6:
    case 7:
        printf("красн");
        break;
    case 8:
    case 9:
        printf("жёлт");
        break;
    }
    switch (N % 12)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        printf("ой ");
        break;
    case 6:
    case 7:
    case 8:
        printf("ого ");
        break;
    }
    switch ((N + 8) % 12)
    {
    case 0:
        printf("крысы");
        break;
    case 1:
        printf("коровы");
        break;
    case 2:
        printf("тигра");
        break;
    case 3:
        printf("зайца");
        break;
    case 4:
        printf("дракона");
        break;
    case 5:
        printf("змеи");
        break;
    case 6:
        printf("лошади");
        break;
    case 7:
        printf("овцы");
        break;
    case 8:
        printf("обезьяны");
        break;
    case 9:
        printf("курицы");
        break;
    case 10:
        printf("собаки");
        break;
    case 11:
        printf("свиньи");
        break;
    }
}

int main()
{
    system("chcp 65001"); //изменение кодовой страницы
    system("cls");
    printf("Введите номер:\n1. Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).\n2. Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды\n3. Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».\n4. Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».\n5. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».\n");
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