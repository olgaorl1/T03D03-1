#include <math.h>
#include <stdio.h>

double calculate(double x);

int main() {
    double x, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    y = calculate(x);

    if (fgetc(stdin) != '\n') {
        printf("n/a");
    } else {
        printf("Результат: %.1f\n", y);
    }

    return 0;
}

double calculate(double x) {
    double y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1.0 / 3) - 1e3) * x + 3) / (x * x / 2) - x * pow(10 + x, 2.0 / x) - 1.01;
    return y;
}
