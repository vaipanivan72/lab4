#include <stdio.h>

int main() {
    int i = 1, j;
    long long p = 0, s;

    do {
        s = 1;
        j = 1;

        do {
            s *= (i + j);
            j++;
        } while (j <= i);

        p += s;
        i++;
    } while (i <= 10);

    printf("p = %lld\n", p);
    return 0;
}

