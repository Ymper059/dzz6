#include <locale.h>
#include <stdio.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y;
    printf("Введение координатной точки x и y: ");
    scanf("%lf %lf", &x, &y);
    if (x >= 0 && y <= 0 &&
        y >= x - 3 &&
        x * x + y * y >= 2) {

        printf("Точка принадлежит заштрихованной области.\n");
    }
    else {

        printf("Точка не принадлежит заштрихованной области.\n");
    }
    return 0;
}
