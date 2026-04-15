#include <stdio.h>

int main() {
    int i, j;
    long long p = 0; // сума
    long long s;     // добуток

    for (i = 1; i <= 10; i++) {
        s = 1;
        for (j = 1; j <= i; j++) {
            s *= (i + j);
        }
        p += s;
    }

    printf("p = %lld\n", p);
    return 0;
}
