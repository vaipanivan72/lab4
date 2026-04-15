#include <stdio.h>

int main() {
    int choice;
    int x, i;
    double product;
    int found;

    do {
        // Вивід меню
        printf("\n---------- МЕНЮ ----------\n");
        printf("1. Обчислити за допомогою for\n");
        printf("2. Обчислити за допомогою while\n");
        printf("3. Обчислити за допомогою do-while\n");
        printf("0. Вихід з програми\n");
        printf("--------------------------\n");
        printf("Зробіть ваш вибір: ");
        scanf("%d", &choice);

        // Якщо користувач вибрав один із методів обчислення
        if (choice >= 1 && choice <= 3) {
            printf("Введіть x: ");
            scanf("%d", &x);
            
            // Скидання змінних перед кожним новим обчисленням
            product = 1.0;
            found = 0;
        }

        switch (choice) {
            case 1:
                // Варіант 1: цикл for
                for (i = 10; i <= 60; i++) {
                    if (i < x && i % 2 != 0) {
                        product *= i;
                        found = 1;
                    }
                }
                if (found) printf("Добуток (for): %.0f\n", product);
                else printf("Чисел не знайдено\n");
                break;

            case 2:
                // Варіант 2: цикл while
                i = 10;
                while (i <= 60) {
                    if (i < x && i % 2 != 0) {
                        product *= i;
                        found = 1;
                    }
                    i++;
                }
                if (found) printf("Добуток (while): %.0f\n", product);
                else printf("Чисел не знайдено\n");
                break;

            case 3:
                // Варіант 3: цикл do-while
                i = 10;
                do {
                    if (i <= 60 && i < x && i % 2 != 0) {
                        product *= i;
                        found = 1;
                    }
                    i++;
                } while (i <= 60);
                
                if (found) printf("Добуток (do-while): %.0f\n", product);
                else printf("Чисел не знайдено\n");
                break;

            case 0:
                printf("Роботу завершено. До побачення!\n");
                break;

            default:
                printf("Помилка: Невірний пункт меню. Спробуйте ще раз.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}
