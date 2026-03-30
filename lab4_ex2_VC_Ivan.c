#include <stdio.h>

int main() {
    int x, i = 10;
    double product = 1.0;
    int found = 0;

    printf("Введіть x: ");
    scanf("%d", &x);

    do {
        if (i <= 60 && i < x && i % 2 != 0) {
            product *= i;
            found = 1;
        }
        i++;
    } while (i <= 60);

    if (found) printf("Добуток (do-while): %.0f\n", product);
    else printf("Чисел не знайдено\n");
    return 0;
}
