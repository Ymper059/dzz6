#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include "Func.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    int c;
    while (1) {
        system("cls");
        printf("1. Нарисовать фигуру\n2. Проверить точку\n0. Выход\nВыбор: ");
        scanf("%d", &c);
        system("cls");
        switch (c) {
        case 1:
            draw();
            system("pause");
            break;
        case 2: {
            double x, y;
            printf("Введите x и y: ");
            scanf("%lf %lf", &x, &y);
            printf(check(x, y) ? "Точка принадлежит области\n" : "Точка не принадлежит области\n");
            system("pause");
            break;
        }
        case 0:
            break;
        default:
            printf("Неверный ввод. Нажмите любую клавишу...");
            system("pause");
            break;
        }
        if (c == 0) {
            break;
        }
    }
}