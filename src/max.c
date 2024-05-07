#include <stdio.h>

int max(int a, int b);

int main() {
    int num1, num2;

    printf("Введите 2 числа: ");
    scanf("%d %d", &num1, &num2);
    if (fgetc(stdin) != '\n') {
        printf("n/a");
    } else {
        printf("Максимальное число ввода: %d\n", max(num1, num2));
    }

    return 0;
}

int max(int a, int b) { return a > b ? a : b; }
