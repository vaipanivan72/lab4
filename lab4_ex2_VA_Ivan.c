#include <stdio.h>

int main() {
    int x, i;
    double product = 1.0;
    int found = 0;

    printf("Введіть x: ");
    scanf("%d", &x);

    for (i = 10; i <= 60; i++) {
        if (i < x && i % 2 != 0) {
            product *= i;
            found = 1;
        }
    }

    if (found) printf("Добуток (for): %.0f\n", product);
    else printf("Чисел не знайдено\n");
    return 0;
}
