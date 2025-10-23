#include <stdio.h>

int main() {
    double pi = 0.0;
    int i;
    int terms = 0;

    for (i = 0; i < 1000000; i++) {
        if (i % 2 == 0)
            pi += 4.0 / (2 * i + 1);
        else
            pi -= 4.0 / (2 * i + 1);

        terms++;

        if (terms % 10000 == 0)
            printf("After %d terms, p ˜ %.6f\n", terms, pi);

        if (pi >= 3.14159)
            break;
    }

    printf("\np first reaches 3.14159 after %d terms.\n", terms);
    return 0;
}
