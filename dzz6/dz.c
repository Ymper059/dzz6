#include <locale.h>
#include <stdio.h>

int check(double x, double y);

int main() {
    setlocale(LC_ALL, "RUS");
    double x, y;
    printf("¬ведение координатной точки x и y: ");
    scanf("%lf %lf", &x, &y);
    printf("–езультат: %d\n", check(x, y));
    return 0;
}
int check(double x, double y) {
    if (x >= 0 && y <= 0 &&
        y >= x - 3 &&
        x * x + y * y >= 2) {
        return 1;
    }
    else {
        return 0;
    }
}