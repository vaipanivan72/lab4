#include <stdio.h>
#include <math.h>

int main() {
    double a, b, dx, x, y;

    // Ввід даних
    printf("Введіть a, b, dx: ");
    scanf("%lf %lf %lf", &a, &b, &dx);

    // Перевірка
    if (dx <= 0) {
        printf("Помилка: dx має бути більше 0\n");
        return 1;
    }

    // Шапка таблиці
    printf("\nРезультати обчислення функції y = f(x):\n");
    printf("--------------------------------------\n");
    printf("    x\t\t y\n");
    printf("--------------------------------------\n");

    // Основний цикл
    for (x = a; x <= b; x += dx) {

        
        // y = (x^2 + x) / 5;

        // Перевірка (якщо є небезпечні операції)
        if (x == 2) {
            printf("%8.2lf\t ERROR (ділення на 0)\n", x);
            continue;
        }

        y = (x * x + x) / 5;

        printf("%8.2lf\t %8.2lf\n", x, y);
    }

    return 0;
}
