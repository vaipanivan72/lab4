#include <stdio.h>

int main() {
    int i = 1, j;
    long long p = 0, s;

    while (i <= 10) {
        s = 1;
        j = 1;

        while (j <= i) {
            s *= (i + j);
            j++;
        }

        p += s;
        i++;
    }

    printf("p = %lld\n", p);
    return 0;
}
