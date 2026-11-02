#pragma once
#include <stdio.h>

int check(double x, double y) {
    return (x >= 0 && y <= 0 && y >= x - 3 && x * x + y * y >= 2) ? 1 : 0;
}

void draw() {
    for (double i = 0.5; i >= -3.5; i -= 0.2) {
        for (double j = -0.5; j <= 3.5; j += 0.1) {
            printf(check(j, i) ? "* " : "  ");
        }
        printf("\n");
    }
}